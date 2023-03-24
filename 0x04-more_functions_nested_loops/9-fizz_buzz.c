#include "main.h"

/**
 * print_fizz_buzz - prints Fizz if multiple of 3, Buzz if multiple of 5,
 *                   FizzBuzz if multiple of both, or the number otherwise
 * @n: the number to print
 */
void print_fizz_buzz(int n)
{
	if (n % 15 == 0)
	{
		_putchar('F'), _putchar('i'), _putchar('z'), _putchar('z');
		_putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
	}
	else if (n % 3 == 0)
	{
		_putchar('F'), _putchar('i'), _putchar('z'), _putchar('z');
	}
	else if (n % 5 == 0)
	{
		_putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
	}
	else
	{
		print_number(n);
	}
}

/**
 * print_fizz_buzz_sequence - prints the FizzBuzz sequence from 1 to n
 * @n: the limit of the sequence
 */
void print_fizz_buzz_sequence(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		print_fizz_buzz(i);

		if (i < n)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
}

/**
 * main - Entry point of the program
 *
 * Function calls print_fizz_buzz_sequence function with an argument of 100,
 * which prints out the "FizzBuzz" sequence from 1 to 100.
 * For a successful completion
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_fizz_buzz_sequence(100);
	return (0);
}

/**
 * print_number - prints a number
 * @n: the number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
