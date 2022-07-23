#include <stdio.h>

/**
 * main - entry function
 *
 * @argc: first parameter
 * @argv: second parameter
 * Return: integer
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
