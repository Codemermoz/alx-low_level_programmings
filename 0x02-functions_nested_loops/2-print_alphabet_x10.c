#include "main.h"
/**
 * main - Entry point
 *
 * void print_alpabet_x10
 * Return: Always 0 (successful)
 */
void print_alphabet_x10(void)
{
	int i;
        char j;

        for (i = 0; i < 10; i++)
        {
         	for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
