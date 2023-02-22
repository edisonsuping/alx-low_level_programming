#include "main.h"

/**
 * main - print_alphabet_x10 - prints 10 times the alphabet
 * Return: Always (0) (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (1 <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
