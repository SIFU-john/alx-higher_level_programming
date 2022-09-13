#include "main.c"
void print_alphabet_x10(void)
{
	char ay;
        int i;
	
	i = 0;

	while (i < 10)
	{

		ay = 'a';
		while (ay <= 'z')
		{

_putchar(ay);

ay++;

}

_putchar('\n');

i++;

}

}