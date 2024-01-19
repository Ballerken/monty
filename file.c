#include "monty.h"

/**
 * read_content - a function that reads all the content of a file
 *
 * @content: char **
 * @path: char **
 * Returns: void
 */
void read_content(char **content, char *path)
{
	FILE *file;
	long file_size;

	file = fopen(path, "r");

	fseek(file, 0, SEEK_END);
	file_size = ftell(file);
	rewind(file);

	*content = (char *)malloc(file_size + 1);
	memset(*content, '\0', file_size + 1);
	fread(*content, 1, file_size, file);

	fclose(file);
}
