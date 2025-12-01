#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char *buffer;
    ssize_t n_read, n_written;

    if (filename == NULL)
    {
	    return (0);
    }
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
	    return (0);
    }
    buffer = malloc(letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    n_read = read(fd, buffer, letters);
    if (n_read == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    n_written = write(STDOUT_FILENO, buffer, n_read);

    free(buffer);
    close(fd);

    if (n_written != n_read)
        return (0);

    return (n_read);
}
