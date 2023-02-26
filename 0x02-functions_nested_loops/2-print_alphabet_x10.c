#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,in lowercase
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
int l, c = 0;
while (c < 10)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
c++;
_putchar('\n');
}
}
