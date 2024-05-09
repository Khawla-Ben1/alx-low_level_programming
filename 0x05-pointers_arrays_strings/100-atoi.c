
int	_atoi(const char *s)
{
	int			i;
	int			a;
	int         n;

	i = 0;
	a = 1;
	n = 0;
	while ((s[i] >= 9 && s[i] <= 13) || (s[i] == 32 && s[i]))
		i++;
	if ((s[i] == '-' || s[i] == '+'))
	{
		if (s[i] == '-')
			a = -a;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		n = (n * 10 + (s[i++] - 48));
	}
	return (a * n);
}
