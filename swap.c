#include "monty.h"

/**
 * swap - swap the top two elements of the list
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

void swap(stack_t **list, unsigned int line)
{
	int first, second;

	if ((*list) != NULL)
	{
		if ((*list)->next != NULL)
		{
			first = (*list)->n;
			second = (*list)->next->n;
			(*list)->next->n = first;
			(*list)->n = second;
			return;
		}
	}

	fprintf(stderr, "L%d: can't swap, stack too short", line);
	exit(EXIT_FAILURE);
}

