#include <unistd.h>

/**
 * _putchar - writes the vharacter c to stdout
 * @c: char can to be printed 
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
