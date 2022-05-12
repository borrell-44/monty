#include "monty.h"

/**
* get_f - get the function specified by parameter
* @list: head of a double linked list
* @buffer: a line of arguments
* @line: the current line number
*
* Return: nothing
*/

void get_f(stack_t **list, char *buffer, unsigned int line)
{
	int i;
	char *token;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"swap", swap},
		{"pop", pop},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	number = NULL;
	token = strtok(buffer, " \n");

	for (i = 0; ops[i].opcode != NULL && token != NULL; i++)
	{
		if (strcmp(token, ops[i].opcode) == 0)
		{
			number = strtok(NULL, " \n");
			ops[i].f(list, line);
			return;
		}
	}

	free_list(list);
	file_error(token);
}

