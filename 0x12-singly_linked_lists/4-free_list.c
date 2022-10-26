#include <stdlib.h>
#include "lists.h"
/**
 * free_list - freeing up allocated memory
 * @head: given node
 */
void free_list(list_t *head)
{
	list_t *node;

	node = head;
	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
	free(head);
}
