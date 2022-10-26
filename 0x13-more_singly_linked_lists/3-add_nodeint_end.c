#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds node to the end of the linked list
 * @head: pointer to a linked list
 * @n: integer
 * Return: 0 Always
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
