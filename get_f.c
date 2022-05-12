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
	char *token, *number, *condition;
	instruction_t ops[] = {
		{"pall", pall},
		{"pint", pint},
		{"swap", swap},
		{"pop", pop},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	token = strtok(buffer, " \n");
	number = strtok(NULL, " \n");
	condition = strtok(NULL, " \n");
	buffer = NULL;

	for (i = 0; ops[i].opcode != NULL && token != NULL; i++)
	{
		if (strcmp("push", token) == 0 && condition == NULL)
		{
			push(number, list, line);
			return;
		}

		if (strcmp(token, ops[i].opcode) == 0 && number == NULL)
		{
			ops[i].f(list, line);
			return;
		}
	}

	fclose(file);
	free_list(list);
	free_pointer(buffer);
	opcode_error(token, line);
}

