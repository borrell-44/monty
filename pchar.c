#include "monty.h"

/**
 * pchar - prints the character value at the top of the list
 * @list: head of a double linked list
 * @line: the current line number
 *
 * Return: nothing
*/

void pchar(stack_t **list, unsigned int line)
{
	if (list == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		fclose(file);
		free_list(list);
		exit(EXIT_FAILURE);
	}

	if ((*list)->n >= 1 && (*list)->n <= 126)
	{
		printf("%c\n", (*list)->n);
		return;
	}

	fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
	fclose(file);
	free_list(list);
	exit(EXIT_FAILURE);
}

