#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at beginning of a list_t list.
 * @head: pointer to head of a list_t list.
 * @str: value to insert into element.
 * Return: the address of the new element,
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * _strlen - function to calculate the length of a const char string
 * @s: string to work with
 * Return: length of string.
 */

int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
