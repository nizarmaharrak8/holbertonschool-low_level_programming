#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * print_read_error - prints read error and exits
 * @file: filename
 */
void print_read_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * print_write_error - prints write error and exits
 * @file: filename
 */
void print_write_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * close_fd - closes file descriptor
 * @fd: the file descriptor
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - handles the copying logic
 * @from: source file
 * @to: destination file
 */
void copy_file(char *from, char *to)
{
	int fd_from, fd_to, r, w;
	char buffer[BUF_SIZE];

	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
		print_read_error(from);

	fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		print_write_error(to);
	}

	while ((r = read(fd_from, buffer, BUF_SIZE)) != 0)
	{
		if (r == -1)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_read_error(from);
		}

		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_write_error(to);
		}
	}

	close_fd(fd_from);
	close_fd(fd_to);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}

