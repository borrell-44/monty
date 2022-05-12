#include "monty.h"

/**
 * pall - prints all the values of the list
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

void pall(stack_t **list, unsigned int line)
{
	stack_t *tmp;

	(void)line;

	if ((*list) == NULL)
	{
		return;
	}

	tmp = (*list);
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

