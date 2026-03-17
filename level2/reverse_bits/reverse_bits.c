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

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char r = 0;
	int i = 0;

	while(i < 8){
	r = (r << 1) | (octet >> i & 1);
	i++;
	}

	return(r);

}

int	main(void){
	print_bits(5);
	write(1, "\n", 1);
	print_bits(reverse_bits(5));
	write(1, "\n", 1);
	write(1, "\n", 1);
	print_bits(254);
	write(1, "\n", 1);
	print_bits(reverse_bits(254));
	write(1, "\n", 1);
}