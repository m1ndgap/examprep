#include <unistd.h>

void fizz()
{
	write(1, "f", 1);
	write(1, "i", 1);
	write(1, "z", 1);
	write(1, "z", 1);
}

void buzz()
{
	write(1, "b", 1);
	write(1, "u", 1);
	write(1, "z", 1);
	write(1, "z", 1);
}

void putnum(int num){
	char c;

	if (num > 9) {
		putnum(num / 10);
	} 
	c = (num % 10) + '0';
	write(1, &c, 1);
}


int main(void){
	int i = 1;

	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			fizz();
			buzz();
			write(1, "\n", 1);
		} else if (i % 5 == 0) 
		{
			buzz();
			write(1, "\n", 1);
		} else if (i % 3 == 0)
		{
			fizz();
			write(1, "\n", 1);
		} else {
			putnum(i);
			write(1, "\n", 1);
		}
		i++;
	}
}