#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free memory
 * @head: pointer to a linked list
 * Return: 0 always
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	if (head == NULL)
		return;

	last = *head;
	while (*head)
	{
		last = *head;
		(*head) = (*head)->next;
		free(last);
	}
	*head = NULL;
}
