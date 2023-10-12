#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square of a given size using '#'
 * @size: the size of the square
 */
void print_square(int size)
{
    int i, j;

    if (size <= 0)
        return;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            putchar('#');
        putchar('\n');
    }
}

int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
