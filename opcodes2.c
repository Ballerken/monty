#include "monty.h"

/**
 * mod - a function that computes the rest of the division of the second top
 * element of the stack by the top element of the stack.
 *
 * @stack_t: stack_t **
 * @line_number: unsigned int
 */
void mod(stack_t **stack_t, unsigned int line_number)
{
	int a, b;

	if (!is_empty(stack_t, 2))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
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
	push(stack_t, b % a);
}

/**
 * pchar - a function that prints the char at the top of the
 * stack, followed by a new line.
 *
 * @stack_t: stack_t **
 * @line_number: unsigned int
 */
void pchar(stack_t **stack_t __attribute__((unused)),
		unsigned int line_number __attribute__((unused)))
{
	printf("pchar occured\n");
}

/**
 * pstr - a function that prints the string starting at the top of
 * the stack, followed by a new line.
 *
 * @stack_t: stack_t **
 * @line_number: unsigned int
 */
void pstr(stack_t **stack_t __attribute__((unused)),
		unsigned int line_number __attribute__((unused)))
{
	printf("pstr occured\n");
}

/**
 * rotr - a rotates the stack from the bottom.
 *
 * @stack_t: stack_t **
 * @line_number: unsigned int
 */
void rotr(stack_t **stack_t __attribute__((unused)),
		unsigned int line_number __attribute__((unused)))
{
	printf("rotr occured\n");
}

/**
 * rotl - a rotates the stack from the bottom.
 *
 * @stack_t: stack_t **
 * @line_number: unsigned int
 */
void rotl(stack_t **stack_t __attribute__((unused)),
		unsigned int line_number __attribute__((unused)))
{
	printf("rotl occured\n");
}
