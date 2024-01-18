#include "monty.h"
/**
 * _isspace - checks if a character is a space
 *
 * @c: int
 * Return: 1 if true, 0 if false
 */
int _isspace(int c)
{
	return (c == ' ');
}


/**
 * is_only_spaces - checks if a string is only composed of spaces
 *
 * @str: char *
 * Return: 1 if true, 0 if false
 */
int is_only_spaces(char *str)
{
	while (*str != '\0')
	{
		if (!_isspace(*str))
			return (0);
		str++;
	}
	return (1);
}


/**
 * _istab - checks if a character is a tab
 *
 * @c: int
 * Return: 1 if true, 0 if false
 */
int _istab(int c)
{
	return (c == '\t');
}


/**
 * is_only_tabs - checks if a string is only composed of tab spaces
 *
 * @str: char *
 * Return: 1 if true, 0 if false
 */
int is_only_tabs(char *str)
{
	while (*str != '\0')
	{
		if (!_istab(*str))
			return (0);
		str++;
	}
	return (1);
}
