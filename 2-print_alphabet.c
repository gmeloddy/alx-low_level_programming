#include <stdio.h>

/**
 *main - return interger value by defult
 * Return: zero
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);
	putchar ('\n');
	return (0);
}
