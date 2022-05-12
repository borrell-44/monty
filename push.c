#include "monty.h"

/**
 * push - pushes an element to the list
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

void push(stack_t **list, unsigned int line)
{
	stack_t *new;

	if (!(check_num(number)))
	{
		free_list(list);
		integer_error(line);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		free_list(list);
		malloc_error();
	}
	new->n = atoi(number);

	if ((*list) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		(*list) = new;
	}
	else
	{
		new->next = (*list);
		new->prev = NULL;
		(*list)->prev = new;
		(*list) = new;
	}
}

