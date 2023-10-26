#include "main.h"
/**
* factorial - Computes the factorial of a number recursively.
* @n: The number to compute the factorial of.
* Return: The factorial of n.
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

