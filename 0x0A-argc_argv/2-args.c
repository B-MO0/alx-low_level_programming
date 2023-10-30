#include <stdio.h>
/**
*main - print argument values in new lines
*@argc:int
*@argv:list
*Return: always 0
*/
int main(int argc, char const *argv[])
{
int i = 0;
while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
