#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accepy)
{
	unsigned int n = 0;
	int r;
	while (*s)
	{
		for (r = 0; accepy[r]; r++)
		{
			if (*s == accepy[r])
			{
					n++;
					break;
				}
				else if (accepy [r + 1] == '\0')
					return (n);
			}
			s++;
		}
		return (n);
}
