#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees memory allocated to struct dlistint
 * @head: pointer to the head of linked list
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
dlistint_t *next = head->next;

free(head);
head = next;
}
}
