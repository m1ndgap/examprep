int	isnum(char str)
{
	return ('0' <= str && str <= '9');
}

int	issign(char str)
{
	return (str == '-' || str == '+');
}

int	ft_atoi(char *str)
{
	int	sum;
	int	i;
	int	sign;

	sum = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (issign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (isnum(str[i]))
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}

int	main(void){
	
}