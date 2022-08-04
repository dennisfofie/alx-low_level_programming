#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry function
 * @argc: arg counter
 * @argv: arg vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int j;

	if (argc != 4)
	{
		printf("error\n");
		exit(98);
	}
	j = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", j);

	return (0);
}
