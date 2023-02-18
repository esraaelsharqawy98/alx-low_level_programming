#include <stdio.h>

/**
 * main - print the letters of the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
char ALPHA[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0, j = 0;
while (i < 26)
{
putchar (alpha[i]);
i++;
}
while (j < 26)
{
putchar (ALPHA[j]);
j++;
}
putchar ('\n');
return (0);
}

