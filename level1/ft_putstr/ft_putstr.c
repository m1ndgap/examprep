#include <unistd.h>

void	ft_putstr(char *str)
{
	char i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(){
	char *str1 = "asdasdasd";
	ft_putstr(str1);
}