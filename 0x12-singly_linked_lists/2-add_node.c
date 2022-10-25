#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - push the node to the beginning of a linked list
 * @head: first node
 * @str: data of a new node
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[count])
		count++;

	new_node->len = count;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
