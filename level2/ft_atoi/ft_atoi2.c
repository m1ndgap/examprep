#include <stdio.h>
#include <stdlib.h>

int isnum (char c)
{
	return(c <= '9' && c >= '0');
}

int isspc (char c)
{
	return(c == ' ' || (c >= 9 && c <= 13));
}

int issign (char c)
{
	if (c == '+' || c == '-')
	{
		if(c == '+')
			return(1);
		if (c == '-')
			return(-1);
	}
	return(0);
}

int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	result = 0;
	sign = 1;
	while(isspc(str[i]))
		i++;
	if(issign(str[i]))
	{
		sign = sign * issign(str[i]);
		i++;
	}
	while(isnum(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result * sign);
}

void	test(char *str)
{
	printf("Input: \"%s\"\n", str);
	printf("ft_atoi: %d\n", ft_atoi(str));
	printf("atoi   : %d\n", atoi(str));
	printf("-------------------------\n");
}

int	main(void)
{
	test("42");
	test("   -42");
	test("+42");
	test("42abc");
	test("--42");
	test("");
	test("2147483647");

	return (0);
}