#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all the parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	int sum = 0;
	unsigned int i;

	va_start(l, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		sum += va_arg(l, int);
	}
	va_end(l);
	return (sum);
}
