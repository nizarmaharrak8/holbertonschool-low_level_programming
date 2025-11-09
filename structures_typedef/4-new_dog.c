#include <stdlib.h>
#include "dog.h"

/**
 * _str_len - returns the length of a string
 * @s: string to measure
 *
 * Return: length of string
 */
int _str_len(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

/**
 * _str_copy - copies a string from src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_str_copy(char *dest, char *src)
{
	int i = 0;

	if (!src || !dest)
		return (NULL);

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog_t instance
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy = NULL, *owner_copy = NULL;
	int len;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	if (name)
	{
		len = _str_len(name);
		name_copy = malloc(len + 1);
		if (!name_copy)
		{
			free(d);
			return (NULL);
		}
		_str_copy(name_copy, name);
	}

	if (owner)
	{
		len = _str_len(owner);
		owner_copy = malloc(len + 1);
		if (!owner_copy)
		{
			free(name_copy);
			free(d);
			return (NULL);
		}
		_str_copy(owner_copy, owner);
	}

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}

