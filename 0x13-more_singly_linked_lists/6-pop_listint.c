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
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
