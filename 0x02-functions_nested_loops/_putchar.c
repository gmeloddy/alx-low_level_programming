#include <unistdio.h>

/**
*_putchar - writes the character to standout output
*@c: the charcter to print
*
*Return: On success
*On error, -1 is returned, and ernno is set appropriatly
*/

int _putchar(char c)
{
	return (write(1, &c, 1));

}
