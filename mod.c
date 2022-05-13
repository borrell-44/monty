#include "monty.h"

/**
 * mod - computes the rest of the division
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

void mod(stack_t **list, unsigned int line)
{
	stack_t *tmp;

	if ((*list) != NULL)
	{
		if ((*list)->next != NULL)
		{
			if ((*list)->n == 0)
			{
				fprintf(stderr, "L%d: division by zero\n", line);
				free_list(list);
				fclose(file);
				exit(EXIT_FAILURE);
			}
			tmp = (*list);
			(*list)->next->n = (*list)->next->n % (*list)->n;
			(*list) = (*list)->next;
			(*list)->prev = NULL;
			free(tmp);
			return;
		}
	}

	fprintf(stderr, "L%d: can't mod, stack too short\n", line);
	free_list(list);
	fclose(file);
	exit(EXIT_FAILURE);
}

