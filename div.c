#include "monty.h"

/**
 * _div - divides the second element by the top element
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

void _div(stack_t **list, unsigned int line)
{
	stack_t *tmp;

	if ((*list) != NULL)
	{
		if ((*list)->next != NULL)
		{
			tmp = (*list);
			if (tmp->n == 0)
			{
				fprintf(stderr, "L%d: division by zero", line);
				free_list(list);
				fclose(file);
				exit(EXIT_FAILURE);
			}
			(*list)->next->n = (*list)->next->n / (*list)->n;
			(*list) = (*list)->next;
			(*list)->prev = NULL;
			free(tmp);
			return;
		}
	}

	fprintf(stderr, "L%d: can't div, stack too short\n", line);
	free_list(list);
	fclose(file);
	exit(EXIT_FAILURE);
}

