#include <stdio.h>
#include <stdlib.h>
/**
*main - adds up the values in the list
*@argc: number of arguments
*@argv: list of arguments
*Return: 0 for success, 1 for error
*/
int main(int argc, char *argv[])
{
int sum = 0;
char *c;
while (argc > 1) 
for (c = argv[argc - 1]; *c; c++)
{
if (*c < '0' || *c > '9')
{
printf("Error\n");
return (1); // Error
}
}
sum += atoi(argv[argc - 1]);
argc--;
}
printf("%d\n", sum);
return (0);
}
