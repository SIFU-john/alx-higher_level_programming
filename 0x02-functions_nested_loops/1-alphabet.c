#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	ay = 'a';

	while (ay <= 'z')
	{
		_putchar(ay);
		ay++;
	}

	_putchar('\n');

}
