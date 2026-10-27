#include <stdio.h>

/**
* main - Des chiffres et des lettres
*
* Return: Always 0 (Success)
*/
int main(void)
{
int results = 0;

while (results <= 9)
{
putchar(results + '0');
results++;
}
putchar('\n');
return (0);
}
