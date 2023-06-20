#include <unistd.h>
/**
 * _putchar writes the character c standard output
 * return success 1.
 * there is an error if -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
