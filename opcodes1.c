#include "monty.h"

/**
 * pall - a function to print all elements in the stack
 *
 * @stack_t: stack_t
 * @line_number: unsigned int
 */
void pall(stack_t **stack_t,
		unsigned int line_number __attribute__((unused)))
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
	int a, b;

	if (!is_empty(stack_t, 2))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		flag = 0;
		return;
	}
	a = pop(stack_t);
	b = pop(stack_t);
	push(stack_t, b - a);
}

/**
 * nop - a function that does nothing.
 *
 * @stack_t: stack_t
 * @line_number: unsigned int
 */
void nop(stack_t **stack_t __attribute__((unused)),
		unsigned int line_number __attribute__((unused)))
{
}

/**
 * _div - a function that divides the second top element of the
 * stack by the top element of the stack.
 *
 * @stack_t: stack_t **
 * @line_number: unsigned int
 */
void _div(stack_t **stack_t, unsigned int line_number)
{
	int a, b;

	if (!is_empty(stack_t, 2))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		flag = 0;
		return;
	}
	a = pop(stack_t);
	b = pop(stack_t);

	if (a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		flag = 0;
		return;
	}
	push(stack_t, b / a);
}

/**
 * mul - a function that multiplies the second top
 * element of the stack with the top element of the stack.
 *
 * @stack_t: stack_t **
 * @line_number: unsigned int
 */
void mul(stack_t **stack_t, unsigned int line_number)
{
	int a, b;

	if (!is_empty(stack_t, 2))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		flag = 0;
		return;
	}
	a = pop(stack_t);
	b = pop(stack_t);
	push(stack_t, a * b);
}
