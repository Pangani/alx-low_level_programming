#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free allocated memory
 * @head: pointer to a linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	last = head;
	while (head)
	{
		last = head;
		head = head->next;
		free(last);
	}
	free(head);
}
