#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a list.
 * @h: singly linked list.
 *
 * Return: Returns the elements in the list.
 *
 */

size_t list_len(const list_t *h)
{
	size_t temp;

	temp = 0;

	while (h != NULL)
	{
		h = h->next;
		temp++;
	}

	return (temp);

}
