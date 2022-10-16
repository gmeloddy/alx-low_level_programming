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
		if (num != 57)
	{
		putchar(',');
		putchar(' ');
		}
			num++;
	}
	putchar('\n');
	return (0);
}
