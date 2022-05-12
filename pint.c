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
		fprintf(stderr, "L%d: can't print, stack empty\n", line);
		fclose(file);
		free_list(list);
		exit(EXIT_FAILURE);
	}
}

