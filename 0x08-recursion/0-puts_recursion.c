#include <stdio.h>

/**
 * _puts_recursion - Prints a string recursively.
 * @s: Pointer to the string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	putchar(*s);
	_puts_recursion(s + 1);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str = "Hello, World!";

	_puts_recursion(str);

	return (0);
}
