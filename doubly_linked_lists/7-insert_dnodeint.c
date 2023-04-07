#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * Return: the address of the new node, or NULL if it failed
 * @h: head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = head;
	dlistint_t *temp_2 = temp->next;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = new_node;
	int i = 0;

	new_node->d = n;
	while (i < n)
	{
		temp->next = ptr;
		ptr->prev = temp;
		ptr->next = temp_2;
		temp_2->prev = ptr;
	}

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (&new_node);
	}
}
