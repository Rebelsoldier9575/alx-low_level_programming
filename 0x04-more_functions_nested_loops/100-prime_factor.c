#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0 upon success
 */
int main(void)
{
	long num = 612852475143;
	long div = 2;
	long maxFact;

	while (num != 0)
	{
		if (num % div != 0)
		div = div + 1;
		else
		{
			maxFact = num;
			num = num / div;
		if (num == 1)
			{
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
