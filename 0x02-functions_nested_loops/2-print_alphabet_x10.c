#include "main.h"

/**
 * main - a function that prints 10 times the alphabet -
 * prints alpha 10 times
 * Return: Always (0) (success)
 */
int main(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
