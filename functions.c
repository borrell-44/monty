#include "monty.h"

/**
 * free_list - frees a doubly linked list
 * @stack: list to be freed
 *
 * Return: nothing
*/

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

/**
 * free_pointer - frees a pointer
 * @ptr: pointer to be freed
 *
 * Return: nothing
*/

void free_pointer(char *ptr)
{
	if (ptr != NULL)
	{
		free(ptr);
	}
}

/**
 * check_num - checks if string is a number
 * @str: string to check
 *
 * Return: 0 if string is not a number or 1 if it is
*/

int check_num(char *str)
{
	size_t i;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; i < strlen(str); i++)
	{
		if (isdigit(str[i]) == 0)
		{
			return (0);
		}
	}

	return (1);
}

