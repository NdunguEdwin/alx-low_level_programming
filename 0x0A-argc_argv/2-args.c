#include <stdio.h>
#include "main.h"

/**
 * main - it will print all arguments it will receives
 * @argc: number of argumentss
 * @argv: array of arguments
 *
 * Return: Always 0 (passed)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
