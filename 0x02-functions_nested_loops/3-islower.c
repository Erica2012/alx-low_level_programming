#include "main.h"

/**
 * _islower - check for lower case letter
 * @character : character to check the case
 * Return:0 or 1
 */

int _islower(int character)
{
	return (character <= 122 && character >= 97);

}
