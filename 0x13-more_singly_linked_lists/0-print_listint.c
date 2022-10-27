#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: A pointer to the head of a listint_t list
 *
 * Return: number of nodes in the listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
