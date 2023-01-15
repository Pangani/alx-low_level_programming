#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a node
 * @head: pointer to the head of a linked list
 * @n: data to be added to new node
 * Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

while ((*head)->next != NULL)
{
*head = (*head)->next;
}
(*head)->next = new_node;
new_node->prev = *head;

return (new_node);
}
