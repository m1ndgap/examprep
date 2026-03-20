#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int q;

	i = 0;
	q = 0;
	while(s1[i])
	{
		q = 0;
		while(s2[q]){
			if(s2[q] == s1[i])
			{
				return((char*)&s1[i]);
			}
			q++;
		}
		i++;
	}
	return(0);
}

void	test(const char *s1, const char *s2)
{
	char *r1 = ft_strpbrk(s1, s2);
	char *r2 = strpbrk(s1, s2);

	printf("s1: \"%s\" | s2: \"%s\"\n", s1, s2);

	printf("ft_strpbrk: ");
	if (r1)
		printf("\"%s\"\n", r1);
	else
		printf("NULL\n");

	printf("strpbrk   : ");
	if (r2)
		printf("\"%s\"\n", r2);
	else
		printf("NULL\n");

	printf("-----------------------------\n");
}

int	main(void)
{
	// Basic matches
	test("hello", "l");
	test("hello", "o");
	test("hello", "h");

	// Multiple possible matches
	test("abcdef", "xzde");
	test("abcdef", "fed");

	// No match
	test("hello", "xyz");
	test("abc", "");

	// Edge cases
	test("", "abc");
	test("", "");

	// Match at beginning
	test("test", "t");

	// Match at end
	test("test", "txyz");

	// Full overlap
	test("aaaaa", "a");

	// Mixed characters
	test("12345", "5");
	test("!@#$%", "$");

	return (0);
}