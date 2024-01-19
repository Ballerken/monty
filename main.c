#include "monty.h"

unsigned int row;
int *operand;
stack_t *top;
int flag;

/**
 * main - a function that begins the entire progrom
 *
 * @argc: int
 * @argv: char **
 * Return: int
 */
int main(int argc, char **argv)
{
	char *content = NULL;
	char **token = NULL;

	row = flag = 1;
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
		free_stack(top);
		free_token(token);
		if (!flag)
			exit(EXIT_FAILURE);
	}
	else
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (0);
}
