#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char charactor = 'a';

	while (charactor <= 'z')
	{
		_putchar(charactor);
		charactor++;

	}
	_putchar('\n');

}

