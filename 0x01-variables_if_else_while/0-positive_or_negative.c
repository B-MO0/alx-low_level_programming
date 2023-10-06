#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - determine if n is positive negative or zero
 * @n, random number
 * return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n==0)
	{
	printf("%d \: is zero");
	} else if(n<0)
	{
	printf("%d \: is negative");
	}
	else{
	printf("%d \: is positive");
	}
	return (0);
}
