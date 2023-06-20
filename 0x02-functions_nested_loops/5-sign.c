#include "main.h"
/**
 * Main - a function that prints the sign of a number
 * Return: 0 (successful)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return(0);
	}
	_putchar('\n');
}
