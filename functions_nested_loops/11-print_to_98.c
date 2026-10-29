#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	int direction = (n <= 98) ? 1 : -1;

	while (1)
	{
		if (n >= 100)
			_putchar(n / 100 + '0');
		if (n >= 10)
			_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');

		if (n == 98)
			break;
		_putchar(',');
		_putchar(' ');
		n += direction;
	}
	_putchar('\n');
}
