#include "main.h"
/**
 * main -  a function that checks for alphabetic character
 * Return: 0 (successful)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return(1);
	}
		return(0);
}
