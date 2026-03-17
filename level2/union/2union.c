#include <unistd.h>

int in_seen(char *seen, int len, char c)
{
	int i = 0;

	while (i < len)
	{
		if (seen[i] == c)
			return 1;
		i++;
	}
	return 0;
}

void unionc(char *s1, char *s2)
{
	char seen[256];
	int len = 0;
	int i = 0;

	while (s1[i])
	{
		if (!in_seen(seen, len, s1[i]))
		{
			write(1, &s1[i], 1);
			seen[len++] = s1[i];
		}
		i++;
	}

	i = 0;

	while (s2[i])
	{
		if (!in_seen(seen, len, s2[i]))
		{
			write(1, &s2[i], 1);
			seen[len++] = s2[i];
		}
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