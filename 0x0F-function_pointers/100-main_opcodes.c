#include <stdio.h>
#include <stdlib.h>

/**
 * main - check codes
 * @argc: argument count
 * @argv: argumint vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	char *opc = (char *)main;
	int i, bytes;

	if (argc != 2)
	{
		printf("error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
