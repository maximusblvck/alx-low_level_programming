#include "main.h"
/**
 * main -  a function that checks for lowercase character
 * Return: 0 (successful)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
		return(0);
}
