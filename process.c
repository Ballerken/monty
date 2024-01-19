#include "monty.h"

/**
 * opcode_handler - a function that handles lines of opcode
 *
 * @list: instruction_t []
 * @token: char **
 * Return: int
 */
int opcode_handler(instruction_t list[], char **token)
{
	int i = 0;

	if (token[1])
	{
		operand = (int *)malloc(sizeof(int));
		*operand = atoi(token[1]);
		if (*operand == 0 && strcmp(token[1], "0") != 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", row);
			flag = 0;
			_free(operand);
			return (0);
		}
	}

	while (i < 15)
	{
		if (!strcmp(list[i].opcode, token[0]))
		{
			list[i].f(&top, row);
			_free(operand);
			free_token(token);
			return (1);
		}
		else
			i++;
	}
	free_token(token);
	_free(operand);
	return (0);
}

/**
 * process_codes - a function to process monty opcodes
 *
 * @token: char ***
 * Returns: void
 */
void process_codes(char **token)
{
	instruction_t opcode_list[] = {
		{"push", _push}, {"pop", _pop},
		{"pint", pint}, {"pall", pall}, {"swap", swap}, {"add", add},
		{"sub", sub}, {"nop", nop}, {"div", _div}, {"mul", mul}, {"mod", mod},
	 {"pchar", pchar}, {"pstr", pstr}, {"rotl", rotl}, {"rotr", rotr}, {NULL}};
	char **line = NULL;
	int index = 0, result = 0;

	while (token[index])
	{
		if (is_only_spaces(token[index])
				|| is_only_tabs(token[index]) || token[index][0] == '#')
		{
			index++;
			continue;
		}
		else
		{
			line = tokenizer(token[index], " ");
			result = opcode_handler(opcode_list, line);
			if (!flag)
			{
				free_token(line);
				_free(operand);
				break;
			}
			if (!result)
			{
				flag = 0;
				fprintf(stderr, "L%d: unknown instruction %s\n", row, line[0]);
				free_token(line);
				break;
			}
			row++;
			index++;
			free_token(line);
		}
	}
	free_token(token);
}
