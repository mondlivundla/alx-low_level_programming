<<<<<<< HEAD
#include <stdio.h>

/**
 * main -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
int main(void)
{
	long x, y;

	x = 612852475143;

	for (y = 2; x > y; y++)
	{
		while (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%lu", y);
	putchar('\n');
	return (0);
}
=======
#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
	long number = 612852475143;
	int inc;

	while (inc++ < number / 2)
	{
	if (number % inc == 0)
	{
		number /= 2;
		continue;
	}

	for (inc = 3; inc < number / 2; inc += 2)
	{
		if (number % inc == 0)
			number /= inc;
	}
	}
	printf("%ld\n", number);
	return (0);
}
>>>>>>> master
