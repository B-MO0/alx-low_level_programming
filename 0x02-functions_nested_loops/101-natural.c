/*
 * File: 101-natural.c
 * Auth: Vincent Kip
 */
#include <stdio.h>
/**
 * main - blahbalajhhhhh
 *
 * Return: Always 0.
 */
int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
