#include "monty.h"

/**
 * file_error - prints error when opening a file is unsuccesful 
 *
 * Return: nothing
*/
void file_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}

/**
 * integer_error - prints error mesage for invalid syntax of integers
 *
 * Return: nothing
*/
void integer_error(unsigned int line)
{
	fprintf(stderr, "L%d: usage: push integer\n", line);
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - prints error message for unsuccessful mallocs
 *
 * Return: nothing
*/
void malloc_error()
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

