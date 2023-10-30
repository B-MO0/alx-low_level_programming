#include <stdio.h>
/**
*main - multipy 2 nums
*@argc: int
*@argv: list
*return : always 0, 1 if error
*/
int main(int argc, char *argv[])
{
int mul;
if (argc == 3)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
else
{
printf("ERROR\n");
return (1);
}
return(0);
}
