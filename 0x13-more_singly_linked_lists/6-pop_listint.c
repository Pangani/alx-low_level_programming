#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the node
 * @head: pointer to that list
 * Return: node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
