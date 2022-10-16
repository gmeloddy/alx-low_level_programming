#include <stdio.h>

/**
* main - returns int value
*Return: zero
*/

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
