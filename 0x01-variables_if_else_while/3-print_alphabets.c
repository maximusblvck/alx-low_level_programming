#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: 0 (successful)
 */
int main(void)
{
	char c;
	char d;
	c = 'a';
	d = 'A';
	while
	(c <= 'z')
	{
	putchar(c);
	c++;
	}
	while
	(d <= 'z')
	{
	putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}
