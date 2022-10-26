#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds new node to the end of linked list
 * @head: first node
 * @str: pointer to a string
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		last = *head;
		new_node->next = NULL;
		while (last->next != NULL)
			last = last->next;

		last->next = new_node;
	}
	last = *head;

	return (new_node);
}
