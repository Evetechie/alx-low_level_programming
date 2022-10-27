#include "lists.h"

/**
 * free_listint - frees a listint list
 * @head: head of a list
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
