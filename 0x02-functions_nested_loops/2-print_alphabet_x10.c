#include "main.h"

/*
 * File: 1-alphabet.c
 *
 * Author: Felix Adeh Essienne
 *
 * Description: prints alphabets 10x in lowercase
 *
 * Return: _putchar(alpha)
 */

/**
 * print_alphabet_x10 - prints the alphabet 10x in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (count++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
