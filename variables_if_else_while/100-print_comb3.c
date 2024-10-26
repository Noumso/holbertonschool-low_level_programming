#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * the two digit are different
 * 01 an 10 are considered the same combination
 * print only the smallest combination
 * return: always (0)
 */

int main(void)
{
	int n;
	int i;

	for (n = 0 ; n < 9 ; n++)
	{
		i = n + 1;
		do {
			putchar('0' + n);
			putchar('0' + 1);
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		} while (i < 10);
	}
	putchar('\n');
	return (0);
}
