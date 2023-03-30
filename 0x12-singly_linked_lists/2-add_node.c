#include "lists.h"

/**
 * add_node - A function that adds a new node
 * at the beginning of a list_t list.
 * @head: Pointer to the first node of the linked list.
 * @str: String to be stored in the list.
 * Return: Returs the address of the head.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	size_t numchar;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	for (numchar = 0; str[numchar]; numchar++)
		;

	temp->len = numchar;
	temp->next = *head;
	*head = temp;

	return (*head);

}
