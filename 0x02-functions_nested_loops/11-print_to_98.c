#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check holberton
 * @n: A input integer
 * Description: function that print all natural numbers
 * from n to 98, followed by a new line
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(",");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}