#include "main.h"
/**
 * main - function that prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26 )
{
_putchar(alpha[i]);
i++;
}

_putchar('\n');
return (0);
}
