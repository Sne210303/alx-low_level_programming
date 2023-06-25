#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers since 0 up to 14
 * followed by a new line
 */

void more_nmbers(void)

{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 15; x++)
	{
	if (y >= 10)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
