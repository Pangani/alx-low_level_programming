#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns number of elements in linked list
 * @h: pointer to the head of the list
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

if (h == NULL)
return (count);

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
