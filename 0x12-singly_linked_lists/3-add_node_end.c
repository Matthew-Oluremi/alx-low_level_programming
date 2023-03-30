#include "lists.h"

/**
 * add_node_end - A function that adds new node
 * at the end of a list_t list.
 * @head: Head of the linked list.
 * @str: String to store in the list.
 *
 * Return: Returns address of head.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp1, *temp2;
	size_t numchar;

	temp1 = malloc(sizeof(list_t));

	if (temp1 == NULL)
		return (NULL);

	temp1->str = strdup(str);

	for (numchar = 0; str[numchar]; numchar++)
		;

	temp1->len = numchar;

	temp1->next = NULL;

	temp2 = *head;

	if (temp2 == NULL)
	{
		*head = temp1;
	}
	else
	{
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp1;
	}

	return (*head);

}

