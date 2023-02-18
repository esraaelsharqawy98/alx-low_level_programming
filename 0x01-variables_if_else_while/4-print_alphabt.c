#include <stdio.h>

/**
 * main - print the letters of the alphabet except q,e
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
if ((alpha[i] != 'e') && (alpha[i] != 'q'))
{
putchar (alpha[i]);
}
i++;
}
putchar ('\n');
return (0);
}
