#include "monty.h"

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

