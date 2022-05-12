#include "monty.h"

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

