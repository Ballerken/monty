#include "monty.h"

/**
 * push - a function to push on the stack
 *
 * @stack: stack_t **
 * @n: int
 * Return: void
 */
void push(stack_t **stack, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	new_node->n = n;
	new_node->prev = *stack;

	if (*stack != NULL)
		(*stack)->next = new_node;
	*stack = new_node;
}


/**
 * pop - a function to pop from the stack
 *
 * @stack: stack_t
 * Return: int
 */
int pop(stack_t **stack)
{
	int n;
	stack_t *temp = NULL;

	if (*stack == NULL)
		return (0);

	n = (*stack)->n;
	temp = (*stack);
	*stack = (*stack)->prev;

	if (*stack != NULL)
		(*stack)->next = NULL;

	_free(temp);
	return (n);
}

/**
 * is_empty - a function that checks if the stack is empty based on the depth
 *
 * @stack: stack_t **
 * @depth: int
 * Return: integer value
 */
int is_empty(stack_t **stack, int depth)
{
	int i = 0;
	stack_t *temp = *stack;

	while (i < depth)
	{
		if (!temp)
			return (0);
		temp = temp->prev;
		i++;
	}
	return (1);
}


/**
 * print_stack - a function that prints the content of a stack
 *
 * @stack: stack_t *
 * Return: void
 */
void print_stack(stack_t *stack)
{
	while (stack)
	{
		printf("%d\n", stack->n);
		stack = stack->prev;
	}
}


/**
 * free_stack - a function that frees all alocated nodes
 *
 * @stack: stack_t
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->prev;
		_free(temp);
	}
}
