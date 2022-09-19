#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: Inputed string
 *
 * Return: No return value
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
