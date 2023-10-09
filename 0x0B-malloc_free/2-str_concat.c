#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: pointer && NULL in case of failure.
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int j, i = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] || s2[j]; j++)
		len++;
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	for (j = 0; s1[j]; j++)
		p[i++] = s1[j];
	for (j = 0; s2[j]; j++)
		p[i++] = s2[j];
	return (p);
}
