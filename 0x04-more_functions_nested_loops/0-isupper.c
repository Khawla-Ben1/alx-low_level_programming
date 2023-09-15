#include "main.h"

/**
 * main - start
 * _isupper - define if a character is uppercase
 *
 * Description: checks for uppercase character.
 * Return: 1 yes 0 no
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
