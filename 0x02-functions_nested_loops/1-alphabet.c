#include "main.h"

/*
 * File: 1-alphabet.c
 *
 * Author: Felix Adeh Essienne
 *
 * Description: prints alphabets in lowercase
 *
 * Return: _putchar(alpha)
 */

/**
 * print_alphabet - prints the alphabet in lowercase,
 * followed by a new line
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
