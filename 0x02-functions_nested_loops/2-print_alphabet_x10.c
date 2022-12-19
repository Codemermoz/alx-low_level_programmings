#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
        int j;
        int letter;

        for (letter = 'a'; letter <= 'z'; letter++)
        {
                for (j = 'a'; j <= 'z'; j++)
                {
                        _putchar(letter);
                }
        }
        _putchar('\n');
}
