#include <stdio.h>

/**
 * main - print the prints all single digit numbers of base 10 starting from 0
 * only using putchar and without char variables
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i % 10 + '0');
i++;
}
putchar('\n');
return (0);
}