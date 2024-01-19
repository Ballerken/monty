#include "monty.h"

/**
 * _push - a function to push unto the stack
 *
 * @stack_t: stack_t **
 * @line_number: unsigned int
 **/
void _push(stack_t **stack_t, unsigned int line_number)
{
	if (!operand)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		flag = 0;
		return;
	}
	push(stack_t, *operand);
	_free(operand);
}

/**
 * _pop - a function to pop from the stack
 *
 * @stack_t: stack_t
 * @line_number: unsigned int
 */
void _pop(stack_t **stack_t, unsigned int line_number)
{
	if (!is_empty(stack_t, 1))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		flag = 0;
		return;
	}
	pop(stack_t);
}

/**
 * pint - a function to print the value at the top of the stack
 *
 * @stack_t: stack_t
 * @line_number: unsigned int
 */
void pint(stack_t **stack_t, unsigned int line_number)
{
	if (!is_empty(stack_t, 1))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		flag = 0;
		return;
	}
	printf("%d\n", (*stack_t)->n);
}

/**
 * swap - a function to swap the top two elements of the stack
 *
 * @stack_t: stack_t
 * @line_number: unsigned int
 */
void swap(stack_t **stack_t, unsigned int line_number)
{
	int a, b;

	if (!is_empty(stack_t, 2))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		flag = 0;
		return;
	}
	a = pop(stack_t);
	b = pop(stack_t);
	push(stack_t, a);
	push(stack_t, b);
}

/**
 * add - a function to add the top two elements in the stack
 *
 * @stack_t: stack_t
 * @line_number: unsigned int
 */
void add(stack_t **stack_t, unsigned int line_number)
{
	int a, b;

	if (!is_empty(stack_t, 2))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		flag = 0;
		return;
	}
	a = pop(stack_t);
	b = pop(stack_t);
	push(stack_t, a + b);
}
