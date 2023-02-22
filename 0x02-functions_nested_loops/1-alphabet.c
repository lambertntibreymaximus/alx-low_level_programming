#include "holberton.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: voi
 */


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
