#include <stdio.h>

/**
 *main - return interger value by defult
 * Return: zero
 */

int main(void)
{
char ch = 'a';
printf("Lower case English Alphabets:\n");
while (ch <= 'z')
{
printf("%cc ", ch);
ch++;
}
printf("\n");
return (0);
}
