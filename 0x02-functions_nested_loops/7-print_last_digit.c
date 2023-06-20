#include "main.h"
/**
 * main -  a function that prints the last digit of a number
 * Return: 0 (successful)
 */
int print_last_digit(int)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return(-l);
	}
	else
	{
		_putchar(l + 48);
		return(l);
	}
}
