#include "monty.h"

/**
 * _push - a function to push unto the stack
 *
 */
void _push(stack_t **stack_t, unsigned int line_number)
{
	push(stack_t, operand);
}

/**
 * pop - a function to pop from the stack
 *
 */
void _pop(stack_t **stack_t, unsigned int line_number)
{
	printf("pop occured\n");
}

/**
 * pint - a function to print the value at the top of the stack
 *
 */
void pint(stack_t **stack_t, unsigned int line_number)
{
	printf("pint occured\n");
}

/**
 * swap - a function to swap the top two elements of the stack
 *
 */
void swap(stack_t **stack_t, unsigned int line_number)
{
	printf("swap occured\n");
}

/**
 * add - a function to add the top two elements in the stack
 *
 */
void add(stack_t **stack_t, unsigned int line_number)
{
	printf("add occured\n");
}
