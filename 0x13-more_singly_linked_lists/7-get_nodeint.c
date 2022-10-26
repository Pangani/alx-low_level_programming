#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - finds nth node
 * @head: pointer to a linked list
 * @index: integer
 * Return: not sure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
