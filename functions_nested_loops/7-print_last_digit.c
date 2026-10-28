#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to print the last digit of
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit = _abs(n % 10);

	_putchar(last_digit + '0');
	return (last_digit);
}
