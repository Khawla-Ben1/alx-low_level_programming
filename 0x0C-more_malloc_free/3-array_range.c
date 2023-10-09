#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *p;
	int i, j = 0;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * ((max - min) + 1));
	if (p != NULL)
	{
		for (i = min; i <= max; i++)
		{
			p[j] = i;
			j++;
		}
		return (p);
	}
	else
		return (NULL);

}
