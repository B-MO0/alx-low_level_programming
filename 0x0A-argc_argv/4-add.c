#include <stdio.h>
#include <stdlib.h>
/**
*main - adds up the values of list
*@argc: int
*@argv: list
*Return: always 0
*/
int main(int argc, char *argv[])
{
int sum = 0;
char *c;
while (--argc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c >'9')
return (prinf("Error\n"), 1);
sum += atoi(argv[argc]);
}
printf("%d\n" , sum);
return (0);
}
