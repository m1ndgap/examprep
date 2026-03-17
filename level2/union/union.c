#include <unistd.h>

int isin (char const *str, char c){
	int i = 0;

	while(str[i])
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int seenb (char const *str, char c, int index){
	int i = 0;

	while(i < index)
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

void unionc (char const *str1, char const *str2){
	int i = 0;
	int u = 0;

	while (str1[i]){
		if(!seenb(str1, str1[i], i))
			write(1, &str1[i], 1);
		i++;
	}

	i = 0;

	while (str2[i]){
		if(!isin(str1, str2[i]) && !seenb(str2, str2[i], i))
			write(1, &str2[i], 1);
		i++;
	}

}

int main(int argc, char **argv)
{
	if (argc == 3) {
		unionc(argv[1], argv[2]);
	} else {
		write(1, "\n", 1);
	}
	
}
