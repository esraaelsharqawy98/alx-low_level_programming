#include "main.h"
/**
 * main - function that prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int lett;
for (lett = 'a'; lett <= 'z'; lett++)
{
_putchar(lett);
}
_putchar('\n');
}
