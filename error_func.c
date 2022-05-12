#include "monty.h"

/**
 * file_error - prints error when opening a file is unsuccesful
 * @file: the file that cannot be open or it dosen't exist
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
 * @line: number of line where the error occured
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
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * opcode_error - prints error message for invalid instructions
 * @opcode: the invalid insttruction
 * @line: the current line number
 *
 * Return: nothing
*/
void opcode_error(char *opcode, unsigned int line)
{
	fprintf(stderr, "L%d: unknown instruction %s", line, opcode);
	free_pointer(opcode);
	exit(EXIT_FAILURE);
}

