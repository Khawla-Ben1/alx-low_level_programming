#include "main.h"
/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	char *p = NULL;
	int k = 0, i = ac, j, sum = 0, tmp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--)
		sum += (len(av[ac]) + 1);
	p = (char *) malloc(sum + 1);
	if (p != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				p[j + tmp] = av[k][j];
			p[tmp + j] = '\n';
			tmp += (j + 1);
			k++;
		}
		p[tmp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (p);
}

/**
*len - returns len of str
*@str: string counted
*Return: returns the len
*/
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
