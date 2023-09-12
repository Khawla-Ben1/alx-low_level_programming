#include"main.h"


/**
 *main - Debut
 *Return: zero
 */
void print_alphabet(void)
{
	int i;
	i = 'a';
	while(i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}