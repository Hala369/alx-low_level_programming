#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Returns the sum of two numbers.
* @a: the 1st integer
* @b: the second integer
* Return: the result of a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - Returns the difference of two numbers.
* @a: the 1st integer
* @b: the second integer
* Return: the result of a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Returns the product of two numbers.
* @a: the 1st integer
* @b: the second integer
* Return: the result of a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - computes a / b
* @a: the 1st integer
* @b: the second integer
* Return: the result of a / b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - Returns the division of two numbers.
* @a: the 1st integer
* @b: the second integer
* Return: the result of a / b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
