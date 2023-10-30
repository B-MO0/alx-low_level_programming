#include <stdio.h>
#include <stdlib.h>
/**
*main - multipy 2 nums
*@argc: int
*@argv: list
*Return: always 0
*/
int main(int argc, char *argv[])
{
int mult;
if(argc == 3)
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
}
else
{
printf("ERROR\n");
return (1);
}
return (0);
}
