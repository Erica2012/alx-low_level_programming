#include <stdio.h>
/**
 * main - main block
 * Desc: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c + 48);
		c++;
	}

	putchar('\n');
	return (0);
}
