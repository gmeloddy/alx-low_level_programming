#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - returns an int value by defult
 *Return: zero
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int ln = n % 10;
if (ln > 5)
{
printf("Last digit of % d is  % d and is greater than 5\n", n, ln);
}
if (ln == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ln);
}
if (ln < 6 && ln != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
}
return (0);
}
