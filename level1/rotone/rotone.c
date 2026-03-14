#include <stdio.h>
#include <unistd.h>

char* rotone(char *str)
{
	int i = 0;
	while(str[i+1])
	{
		printf("%c\n", str[i] + 1);
		str[i] = str[i] + 1;
		i+=2;
	}
	return(str);
}

int main(int argc, char **argv)
{
	printf("\nargc = %i\n", argc);
	if (argc == 2){
		char *x = rotone(argv[1]);
		printf("%s\n", x);
	}
}