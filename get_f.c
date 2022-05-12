#include "monty.h"

/**
* get_f - get the function specified by parameter
* @s: specifier given
*
* Return: return pointer to function
*/

void get_f(stack_t **list, char *buffer, unsigned int line)
{
	int i;
	char *token;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
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

	file_error(token);
}

