unsigned char swap_bits (octet)
{
	return( octet >> 4 | octet << 4);
};

int main(){
	swap_bits(1);
}