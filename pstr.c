#include "monty.h"

/**
 * add - adds the top two elements of the list
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

void pstr(stack_t **list, unsigned int line)
{
	stack_t *tmp = *list;

	(void)line;

	while (tmp != NULL)
	{
		if (tmp->n >= 1 && tmp->n <= 126)
		{
			printf("%c", tmp->n);
		}
		else
		{
			break;
		}

		tmp = tmp->next;
	}
	putchar('\n');
}

