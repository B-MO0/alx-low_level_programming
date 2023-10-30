#include <stdio.h>
/**
 *main - program prints number of arguments passed to it witout counting the first element
 *@argc:int
 *@argv:list
 *Return: always 0
*/
int main(int argc, char *argv[])
{
  printf("%d\n", argc - 1);
  return (0);
}
