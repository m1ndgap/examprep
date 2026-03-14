#include <unistd.h>
#include <stdio.h>

int first_word(char *str){
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 10 || str[i] == 9)
		{
			return(0);
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		first_word(argv[1]);
		// first_word("zzzx\txxxxxxxx");
		// first_word("qqqx\nxxxxxxxx");
		write(1, "\n", 1);
	} else {
		write(1, "\n", 1);
	}
}