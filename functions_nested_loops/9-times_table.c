#include "main.h"
/**
 * void times_table - print 9 times_table
 * print the 9 times table
 *return void 
 **/

void times_tables(void)
{
	int row, column, tens, ones, product
	
	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 0; column++)
		{
			product = row * column;
			tens = product / 10;
			ones = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(ones + '0');
			}
			else
			{
				_putchar(tens + '0')
				_putchar(ones + '0')
			}
		}
		_putchar('\n');
	}
}	
