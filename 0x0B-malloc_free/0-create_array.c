#include "main.h"

/**
* create_array - creates an array of chars .
*@size: Size of the array
*@c: Character to insert
*Return: pointer to array && NULL if size is zero or if it fails,
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
