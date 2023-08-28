#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first integer
 * @b: second integer
 * Return: plusresult
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtracts b from a
 * @a: first integer
 * @b: second integer
 * Return: minusresult
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies a and b
 * @a: first integer
 * @b: second integer
 * Return: multresult
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides a by b
 * @a: first integer
 * @b: second integer
 * Return: divresult
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - computes a modulus b
 * @a: first integer
 * @b: second integer
 * Return: modresult
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
