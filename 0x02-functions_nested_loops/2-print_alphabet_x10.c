#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ten;
	int la = 0;

	while (la < 10)
	{
		ten = 'a';
		while (ten <= 'z')
		{
			_putchar(la);
			ten++;
		}
		_putchar('\n');
		la++;
	}
}
