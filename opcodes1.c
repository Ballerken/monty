#include "monty.h"

/**
 * pall - a function to print all elements in the stack
 *
 */
void pall(stack_t **stack_t, unsigned int line_number)
{
	print_stack(*stack_t);
}

/**
 * sub - a function that subtracts the top element of the stack from the
 * second top element of the stack.
 *
 * @stack_t: stack_t **
 * @line_number: int
 */
void sub(stack_t **stack_t, unsigned int line_number)
{
	printf("sub occured\n");
}

/**
 * nop - a function that does nothing.
 *
 */
void nop(stack_t **stack_t, unsigned int line_number)
{
	printf("nop occured\n");
}

/**
 * div - a function that divides the second top element of the
 * stack by the top element of the stack.
 *
 */
void _div(stack_t **stack_t, unsigned int line_number)
{
	printf("div occured\n");
}

/**
 * mul - a function that multiplies the second top
 * element of the stack with the top element of the stack.
 *
 */
void mul(stack_t **stack_t, unsigned int line_number)
{
	printf("mul occured\n");
}
