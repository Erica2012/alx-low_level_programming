#include "main.h"

/**
 * _isalpha - check for lower case letter
 * @character : character to check
 * Return:0 or 1
 */

int _isalpha(int character)
{
	return ((character >= 65 && character <= 90) || (character <= 122 && character >= 97));
}
