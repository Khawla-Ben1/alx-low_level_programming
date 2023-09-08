#include <stdio.h>
/**
 *main - Debut
 *Return: zero 
 */
int main(void)
{
	int letter, n;

	for (letter = 97, n = 1 ; n < 27; letter++, n++)
	{
		putchar(letter);
	}
	putchar("\n");
	return (0);
}