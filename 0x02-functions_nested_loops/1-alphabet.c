#include <main.h>
/**
 * main - a function that prints the alphabet, in lowercase, followed by a new line
 * Return: 0 (successful)
 */
void print_alphabet(void)
{
	int i;

	for(i = 97; i <= 122; i++)
	{
	_putchar(i);
	}
_putchar('\n');
}
