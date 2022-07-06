#include "main.h"

/**
 * _isalpha - check for lower case letter
 * @ch : character to check
 * Return:0 or 1
 */

int _isalpha(int ch)
{
	return ((ch>= 65 && ch <= 90) || (ch<= 122 && ch >= 97));
}
