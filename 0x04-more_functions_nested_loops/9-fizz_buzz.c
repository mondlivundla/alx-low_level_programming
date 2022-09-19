<<<<<<< HEAD
#include <stdio.h>

/**
 * main -  checks for checks for a digit (0 through 9).
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			if (x % 3 == 0)
			{
				printf("Fizz");
			}
			if (x % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
=======
#include <stdio.h>

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
>>>>>>> master
