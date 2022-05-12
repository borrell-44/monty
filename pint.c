#include "monty.h"

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

