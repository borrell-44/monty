#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char *number;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void malloc_error(void);
int check_num(char *str);
void file_error(char *file);
void free_pointer(char *ptr);
void free_list(stack_t **stack);
void integer_error(unsigned int line);
void get_f(stack_t **list, char *buffer, unsigned int line);
void push(stack_t **list, unsigned int line);
void pall(stack_t **list, unsigned int line);
void pint(stack_t **list, unsigned int line);
void swap(stack_t **list, unsigned int line);
void add(stack_t **list, unsigned int line);
void pop(stack_t **list, unsigned int line);
void nop(stack_t **list, unsigned int line);

#endif

