#include "main.h"

/**
 * _strcat - 
 * @dest:char
 * @src:char
 * Return:char pointeur
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
