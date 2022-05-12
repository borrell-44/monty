#include "monty.h"

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

