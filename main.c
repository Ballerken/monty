#include "monty.h"

unsigned int row;
unsigned int operand;
stack_t *top;

/**
 * main - a function that begins the entire progrom
 *
 * @argc: int
 * @argv: char **
 * @env: char **
 * Return: int
 */
int main(int argc, char **argv)
{
	char *content = NULL;
	char **token = NULL;

	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (access(argv[1], F_OK) == 0)
	{
		read_content(&content, argv[1]);
		token = tokenizer(content, "\n");
		_free(content);

		process_codes(token);
	}
	else
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (0);
}
