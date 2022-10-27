#include "lists.h"

/**
 * find_listint_loop - finds the loopin a linked list
 * @head: head of a list
 *
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f;
	listint_t *prev;

	f = head;
	prev = head;
	while (head && f && f->next)
	{
		head = head->next;
		f = f->next->next;

		if (head == f)
		{
			head = prev;
			prev = f;
			while (1)
			{
				f = prev;
				while (f->next != head && f->next != prev)
				{
					f = f->next;
				}
				if (f->next == head)
					break;
				head = head->next;
			}
			return (f->next);
		}
	}
	return (NULL);
}
