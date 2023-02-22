#include "holberton.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

int main(void){
	print_alphabet();
	return(0);
}

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
