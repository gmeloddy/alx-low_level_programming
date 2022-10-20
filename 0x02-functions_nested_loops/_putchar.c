#include <unistd.h>

/**
*_putchar - writes the character to standout output
*@c: the charcter to print
*
*Return: On success, return 1
*On error, -1 is returned, and error is set appropriatly
*/

int _putchar(char c)
{
	return (write(1, &c, 1));

}
