#include "monty.h"

void add(stack_t **list, unsigned int line)
{
	stack_t *tmp;

	if ((*list) != NULL)
	{
		if ((*list)->next != NULL)
		{
			(*list)->next->n += (*list)->n;
			tmp = (*list);
			(*list) = (*list)->next;
			(*list)->prev = NULL;
			free(tmp);
			return;
		}
	}

	fprintf(stderr, "L%d: can't add, stack too short\n", line);
	free_list(list);
	exit(EXIT_FAILURE);
}

