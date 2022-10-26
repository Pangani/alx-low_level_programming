#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - calculates the length of the linked list
 * @h: pointer to the list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h->next)
	{
		count++;
		h = h->next;
	}
	return (count);
}
