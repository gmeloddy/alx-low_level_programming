#include <stdio.h>

/**
*main - return integer value by defult
*Return: zero
*/

int main(void)
{
int letter = 97;
while (letter <= 122)
{
	if ((letter != 101) && (letter != 113))
	{
		putchar(letter);
	}
	letter++;
}
putchar('\n');
return (0);
}
