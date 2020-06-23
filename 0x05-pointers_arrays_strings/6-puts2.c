#include "holberton.h"
/**
 * puts2 - prints every other character of a string, starting
 * with the first character.
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i = 1 + 2;
	}
	_putchar('\n');
}
