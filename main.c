#include "monty.h"

/**
 * main - executes monty byte code files
 * @argc: number of arguments given
 * @argv: list of the given arguments
 *
 * Return: 0 if successfull
*/

int main(int argc, char *argv[])
{
	stack_t *list = NULL;
	char *buffer = NULL;
	size_t len = 0;
	unsigned int line = 1;
	FILE *f;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	if (access(argv[1], F_OK) != 0)
	{
		file_error(argv[1]);
	}

	f = fopen(argv[1], "r");
	if (f == NULL)
	{
		file_error(argv[1]);
	}

	while (getline(&buffer, &len, f) != -1)
	{
		get_f(&list, buffer, line);
		line++;
	}

	free_pointer(buffer);
	free_list(&list);
	fclose(f);
	return (0);
}

