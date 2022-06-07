#include "main.h"

/*
 * File: 1-alphabet.c
 *
 * Author: Felix Adeh Essienne
 *
 * Description: Program that prints alphabets in lowercase
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
