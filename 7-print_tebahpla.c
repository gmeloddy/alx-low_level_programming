#include <stdio.h>

/**
*main - return integer value by defult
*Return: zero
*/

int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
	putchar(letter);
	--letter;
}
putchar('\n');
return (0);
}
