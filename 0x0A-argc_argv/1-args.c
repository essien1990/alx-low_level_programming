#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
