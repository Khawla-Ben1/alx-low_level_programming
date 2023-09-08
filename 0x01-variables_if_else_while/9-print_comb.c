#include <stdio.h>
/**
 *main - Start
 *Return: zero
 */
int main(void)
{
	int dig, i;

	for (dig = 48, i = 0; i < 10; dig++, i++)
	{
		putchar(dig);
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
		putchar(10);
		return (0);

}
