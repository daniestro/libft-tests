int	ft_isdigit(int c);

static int	test_case(int c, int res)
{
	return (!(ft_isdigit(c) ^ res));
}

static int	test_case_between(int start_c, int end_c, int res)
{
	char	c;

	for (c = start_c; start_c <= c && c <= end_c; c++)
	{
		if(test_case(c, res))
			continue;
		return (0);
	}
	return (1);
}
