#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements
 * @h: head of the list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    int count = 0;

    if (h == 0)
        return (count);

    while (h->prev != NULL)
        h = h->prev;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }
    return (count);
}
