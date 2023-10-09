#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The max number of bytes of s2 to concatenate to s1.
*
*Return: a pointer but if it fails - NULL.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *all;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	all = malloc(sizeof(char) * (len + 1));
	if (all == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		all[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		all[len++] = s2[index];
	all[len] = '\0';
	return (all);
}
