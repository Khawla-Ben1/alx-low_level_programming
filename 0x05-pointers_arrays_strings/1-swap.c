#include "main.h"

/**
 *swap_int - Entry point
 *@a: pointer the integer we want to swap
 *@b: pointer the integer we want to swap
 *
 *Return: no return
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
