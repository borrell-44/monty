#include "monty.h"

void free_list(stack_t **stack)
{
	stack_t *tmp = *stack;

	if (stack != NULL)
	{
		while ((*stack)->next != NULL)
		{
			(*stack) = (*stack)->next;
			free(tmp);
			tmp = (*stack);
		}
		free(*stack);
	}
}

void free_pointer(char *ptr)
{
	if (ptr != NULL)
	{
		free(ptr);
	}
}

