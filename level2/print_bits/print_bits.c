#include <unistd.h>

void print_bits(unsigned char octet)
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

int main(void){
	print_bits(5);
}