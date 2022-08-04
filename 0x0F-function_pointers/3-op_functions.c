#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add function
 * @a: first parameter
 * @b: second parameter
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction function
 * @a: first num
 * @b: second num
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication function
 * @a: furst num
 * @b: secoond num
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division function
 * @a: first num
 * @b: second num
 * Return: division
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("error\n");
	exit(100);
}
/**
 * op_mod - modulo of function
 * @a: num 1
 * @b: num 2
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("error\n");
	exit(100);
}
