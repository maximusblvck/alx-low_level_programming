#include <main.h>
/**
 * main - a function that prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: 0 (successful)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; <= 10; i++)
	{
		for  (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
