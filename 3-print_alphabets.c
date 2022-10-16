#include <stdio.h>

/**
*main - return integer value by defult
*Return: zero
*/

int main(void)
{
char letter1 = 'a';
char letter2 = 'A';

while (letter1 <= 'z')
{
	putchar(letter1);
	letter1++;
}
while (letter2 <= 'Z')
{
	putchar(letter2);
	letter2++;
}
putchar('\n');
return (0);
}
