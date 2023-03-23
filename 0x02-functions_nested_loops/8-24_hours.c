#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	/* Iterate through every hour */
	for (hour = 0; hour < 24; hour++)
	{
	/* Iterate through every minute */
	for (minute = 0; minute < 60; minute++)
		{
		/* Print the hour and minute in the required format */
		_putchar('0' + (hour / 10)); /* Print tens digit of hour */
		_putchar('0' + (hour % 10)); /* Print ones digit of hour */
		_putchar(':');
		_putchar('0' + (minute / 10)); /* Print tens digit of minute */
		_putchar('0' + (minute % 10)); /* Print ones digit of minute */
		_putchar('\n');
		}
	}
}
