#include "main.h"

/**
 *  _isupper - define if a character is uppercase
 *
 * Description: checks for uppercase character.
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
