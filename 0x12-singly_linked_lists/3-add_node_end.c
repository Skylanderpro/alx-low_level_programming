#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Pointer to a pointer to the head of the list
 * @str: The string to be duplicated and stored in the new node
 *
 * Return: Address of the new element, or (NULL) if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	int str_length;

	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		fprintf(stderr, "Memory allocation failed for string duplication.\n");
		free(new_node);
		return (NULL);
	}

	str_length = strlen(str);
	new_node->len = str_length;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}

