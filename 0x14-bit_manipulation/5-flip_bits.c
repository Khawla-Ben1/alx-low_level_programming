#include "main.h"

/**
*flip_bits - gets the number of bits to flip to get from n to m
*@n: first number
*@m: last number
*
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f = n ^ m;
	int count = 0;

	while (f)
	{
		if (f & 1)
			count++;
		f >>= 1;
	}
	return (count);
}