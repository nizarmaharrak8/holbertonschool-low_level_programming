#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte
 * @dest: Pointer to the buffer where the string will be copied
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

if (!dest || !src)
return (dest);

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';
return (dest);
}

