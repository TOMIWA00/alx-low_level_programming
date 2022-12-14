#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to be measured.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
