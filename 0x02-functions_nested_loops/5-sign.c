#include "main.h"
/**
 * print_sign - return 0 letter lowercase
 * @n : number to check
 * Return: Always 0.
 */
int print_sign(int n)
{
	int c;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
