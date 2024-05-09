#include "main.h"

/**
 *_strcpy - Entry point
 *@dest: pointer the first string
 *@src: pointer the second string
 *Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(src + i) != '\0')
		i++;
	i++;
	j = 0;
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	return (&*dest);
}
