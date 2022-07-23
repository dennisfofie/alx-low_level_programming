#include <stdio.h>

/**
 * main - funtion to print a number
 *
 * @argc: first argument
 * @argv: second argumet
 *
 * Return: a string
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argv - 1);
	return (0);
}
