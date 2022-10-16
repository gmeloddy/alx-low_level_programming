#include <stdio.h>

/**
*main - return integer value by defult
*Return: zero
*/

int main(void)
{
int num = '0';
char letter = 'a';

while (num <= '9')
{
	putchar(num);
	num++;
}
while (letter <= 'f')
{
	putchar(letter);
	letter++;
}
putchar('\n');
return (0);
}
