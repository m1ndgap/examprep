#include <unistd.h>

void repeat_alpha(char *str)
{
	int i = 0;
	int u = 0;

	while(str[i])
	{
		u = str[i] - 96;
		while(u >= 0){
			write(1, &str[i], 1); 
			u--;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
}