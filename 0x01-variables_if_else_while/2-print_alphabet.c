#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{

	char c = "a";

	while (c <= "z")
	{
		putchar(c);
		c++
	}
	putchar("\n");
	return (0);
}
