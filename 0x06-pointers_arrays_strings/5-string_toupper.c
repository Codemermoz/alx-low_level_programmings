#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 *
 * @n: the string to be changed
 * Return: A pointer to the changed string
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
