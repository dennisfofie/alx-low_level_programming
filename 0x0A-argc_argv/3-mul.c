#include <stdio.h>

/**
 * main - entry function
 *
 * @argc: first param
 * @argv: second paara
 * Return: product of two integers
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{	
		if (argc == 2)
		{
			int m;
			m = *argv[i] * *argv[i + 1];
		       printf("%d\n", m);	
		}
		else
		{
			printf("error\n");
		}
	}
	return (0);
}
