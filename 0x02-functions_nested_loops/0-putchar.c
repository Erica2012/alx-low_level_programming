#include "main.h"

/**
 * main - Entry point
 * Return:0
 */

int main(void)
{
char c[9] = "_putchar";
int itrate = 0;
while (itrate < 8)
{
_putchar(c[itrate]);
itrate++;
}
_putchar('\n');
return (0);
}
