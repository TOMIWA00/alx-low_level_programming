#include "main.h"
/**
 * print _most_numbers - prints numbers betweeen 0 to 9
 * Description: Prints the numbers excluding 2 amd 4
 * Return: no return
 */
void print_most_numbers(void)

{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
	if (ch != 50 && ch != 52)
	{
	continue;
	}
	else
	{
	_putchar(ch);
	}
	}
	_putchar("\n");
}
