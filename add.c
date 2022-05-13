#include "monty.h"

/**
 * add - adds the top two elements of the list
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

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
	fclose(file);
	free_list(list);
	exit(EXIT_FAILURE);
}

