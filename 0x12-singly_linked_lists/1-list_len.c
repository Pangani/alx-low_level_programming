#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - counts elements in linked list
 * @h: the beginning node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

