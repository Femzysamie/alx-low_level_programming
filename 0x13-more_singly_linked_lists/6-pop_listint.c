#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - Deletes the node of a listint_t linked list
* and return the head node's data @n
* @head: Double pointer the head list
* Return: The head node's data n, else  0 if empty
*/

int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;
	int n;

	if (*head == NULL)
		return (0);

	node_to_delete = *head;
	*head = node_to_delete->next;
	n = node_to_delete->n;
	free(node_to_delete);

	return (n);
}
