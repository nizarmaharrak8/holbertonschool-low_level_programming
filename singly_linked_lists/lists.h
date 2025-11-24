#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;          /* استخدم tab هنا بدل مسافات */
	unsigned int len;   /* استخدم tab هنا بدل مسافات */
	struct list_s *next;/* استخدم tab هنا بدل مسافات */
} list_t;

size_t print_list(const list_t_

