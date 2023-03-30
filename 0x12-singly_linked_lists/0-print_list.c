#include "lists.h"

/**
 * print_list - A function that prints all elements of a list_t list.
 * @h: singly linked list.
 * Return: Returns number of elements in the list.
 *
 */

size_t print_list(const list_t *h)
{
	size_t temp;

	temp = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		temp++;
	}

	return (temp);

}
