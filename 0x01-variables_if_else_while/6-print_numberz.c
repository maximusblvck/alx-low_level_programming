#include <stdio.h>
/**
 * main -  a program that prints all single digit numbers of base 10 starting from 0, followed by a new line
 * Return: 0 (successful)
 */
int main(void)
{
	int digit = 0;
	while (digit <= 9)
	{
	putchar(digit + '0');
	digit++;
	}
	putchar('\n');
	return (0);
}
