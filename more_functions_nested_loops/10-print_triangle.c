#include <unistd.h>

void _putchar(char c);

void print_triangle(int size)
{
    int row, space, hash;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 1; row <= size; row++)
    {
        /* Print leading spaces /
        for (space = 0; space < size - row; space++)
            _putchar(' ');

        / Print hashes /
        for (hash = 0; hash < row; hash++)
            _putchar('#');

        / New line at end of each row */
        _putchar('\n');
    }
}
