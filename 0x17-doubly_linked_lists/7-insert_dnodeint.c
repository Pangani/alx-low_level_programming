#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 * @h: pointer to the head of alist
 * @idx: index at which to add new node
 * @n: data of a node
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node;
    unsigned int count = 0;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    
    new_node->n = n;
    new_node->next = NULL;

    if(*h == NULL)
    {
        new_node->prev = NULL;
        *h= new_node;
        return (new_node);
    }

    while ((*h)->next != NULL)
    {
        if(count == idx)
        {
          (*h)->next = new_node;
            new_node->prev = *h;  
        }
        *h = (*h)->next;
        count++;
    }
    return (new_node);
}