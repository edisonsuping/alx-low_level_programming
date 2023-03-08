#include "main.h"

/**
 * main -_islower - Checks for lowercase character
 * @c: The character to be checked
 * Description: converts the uppercase letter C to the
 * corresponding lowercase letter
 * Return: 1 for the lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
