#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Compute the last digit of the number */
	last_digit = n % 10;

	/* If the last digit is negative, make it positive */
	if (last_digit < 0)
	last_digit = -last_digit;

	/* Print the last digit */
	_putchar(last_digit + '0');

	/* Return the value of the last digit */
	return (last_digit);
}
