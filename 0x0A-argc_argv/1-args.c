#include <stdio.h>
#include "main.h"

/**
 * main - print the arguments passed to the program
 * @argc: number of argumments
 * @argv: array of arguments
 *
 * Return: if 0 (passed)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
