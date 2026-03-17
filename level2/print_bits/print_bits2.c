#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char bit_mask;
	int i = 7;

	while (i >= 0)
	{
		bit_mask = (octet >> i & 1) + '0';
		write(1, &bit_mask, 1);
		i--;
	}
}

int main(void)
{
	print_bits(1);
	write(1, "\n", 1);
	print_bits(5);
	write(1, "\n", 1);
	print_bits(21);
	write(1, "\n", 1);
	print_bits(115);
	write(1, "\n", 1);
	print_bits(255);
	write(1, "\n", 1);
}