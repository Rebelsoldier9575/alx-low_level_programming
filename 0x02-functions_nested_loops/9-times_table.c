#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, result;

	/* Iterate through each row of the table */
	for (i = 0; i <= 9; i++)
	{
	/* Iterate through each column of the table */
	for (j = 0; j <= 9; j++)
	{
		/* Calculate the result of the multiplication */
		result = i * j;

		/* Print the result with proper formatting */
		if (j == 0)
			_putchar('0' + result); /* Single digit number */
		else if (result < 10)
		{
			_putchar(','); /* Separator */
			_putchar(' '); /* Padding space */
			_putchar(' '); /* Padding space */
			_putchar('0' + result); /* Single digit number */
		}
		else if (result >= 10 && result < 100)
		{
			_putchar(','); /* Separator */
			_putchar(' '); /* Padding space */
			_putchar('0' + (result / 10)); /* Tens digit */
			_putchar('0' + (result % 10)); /* Ones digit */
		}
		else /* result >= 100 */
		{
			_putchar(','); /* Separator */
			_putchar('0' + (result / 100)); /* Hundreds digit */
			_putchar('0' + ((result / 10) % 10)); /* Tens digit */
			_putchar('0' + (result % 10)); /* Ones digit */
		}
	}

		/* Print a newline character to start a new row */
		_putchar('\n');
	}
}
