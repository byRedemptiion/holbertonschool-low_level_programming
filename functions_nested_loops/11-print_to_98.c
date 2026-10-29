#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	int num;
	int direction = (n <= 98) ? 1 : -1;

	while (1)
	{
		num = n;
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		if (num >= 100)
			_putchar(num / 100 + '0');
		if (num >= 10)
			_putchar((num / 10) % 10 + '0');
		_putchar(num % 10 + '0');

		if (n == 98)
			break;
		_putchar(',');
		_putchar(' ');
		n += direction;
	}
	_putchar('\n');
}
