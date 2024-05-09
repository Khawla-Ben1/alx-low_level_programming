
int	_atoi(char *s)
{
	int			i;
	int			s;
	int         n;

	i = 0;
	s = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32 && str[i]))
		i++;
	if ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10 + (str[i++] - 48));
	}
	return (s * n);
}
