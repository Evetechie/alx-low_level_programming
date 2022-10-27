#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * and returns the head node's data(n)
 * @head: head of a list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->next;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
