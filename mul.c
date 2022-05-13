#include "monty.h"

/**
 * mul - multiplies the top two elements of the list
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

void mul(stack_t **list, unsigned int line)
{
	stack_t *tmp;

	if ((*list) != NULL)
	{
		if ((*list)->next != NULL)
		{
			tmp = (*list);
			(*list)->next->n = (*list)->next->n * (*list)->n;
			(*list) = (*list)->next;
			(*list)->prev = NULL;
			free(tmp);
			return;
		}
	}

	fprintf(stderr, "L%d: can't mul, stack too short\n", line);
	free_list(list);
	fclose(file);
	exit(EXIT_FAILURE);
}

