#include <stdio.h>

/**
 * main - funtion with the argument
 *
 * @argc: first argument
 * @argv: second argument
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		/*printf("%d%s\n", argc, argv[argc]);*/
	}
	return (0);
}
