#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sums up all integers in linked list
 * @head: pointer to a linked link
 * Return: sum of elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
