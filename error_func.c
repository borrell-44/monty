#include "monty.h"

void file_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}

void integer_error(unsigned int line)
{
	fprintf(stderr, "L%d: usage: push integer\n", line);
	exit(EXIT_FAILURE);
}

void malloc_error()
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

void pint_error(unsigned int line)
{
	fprintf(stderr, "L%d: can't print, stack empty\n", line);
	exit(EXIT_FAILURE);
}

void pop_error(unsigned int line)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}

