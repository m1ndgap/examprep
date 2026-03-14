#include <unistd.h>

void repeat_alpha(char *str)
{
	int i = 0;
	int u = 0;

	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			u = str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			u = str[i] - 'A' + 1;
		else 
			u = 1;			
		while(u > 0){
			write(1, &str[i], 1); 
			u--;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
}