#include "main.h"

/**
* _strdup - returns a pointer which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*/

char *_strdup(char *str)
{
	char *p;
	int i, len;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}
	p[len] = '\0';
	return (p);
}
