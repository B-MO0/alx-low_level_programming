#include <stdio.h>
/**
*main - print argument values in new lines
*@argc:int
*@argv:list
*@i: just a number
*Return: always 0
*/
int main(int argc, char *argv[])
{
int i = 0;
while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
