#include "monty.h"

/**
 * pint - prints the value at the top of the list
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

void pint(stack_t **list, unsigned int line)
{
	if ((*list) != NULL)
	{
		printf("%d\n", (*list)->n);
	}
	else
	{
		pint_error(line);
	}
}

