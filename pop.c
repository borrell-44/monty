#include "monty.h"

/**
 * pop - removes the top element of the list
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

void pop(stack_t **list, unsigned int line)
{
	stack_t *tmp;

	if ((*list) != NULL)
	{
		if ((*list)->next != NULL)
		{
			tmp = (*list);

			(*list) = (*list)->next;
			(*list)->prev = NULL;

			if (tmp != NULL)
			{
				free(tmp);
			}
		}
	}
	else
	{
		pop_error(line);
	}
}

