#include"main.h"


/**
 *main - start
 *Return: always 0
 *print_alphabet - Entry point
 *Description : the function prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
