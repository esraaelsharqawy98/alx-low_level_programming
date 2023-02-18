#include <stdio.h>

/**
 * main - print the prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char numbers[16] = "0123456789abcdef";
for(int i = 0; i < 16 ; i++)
{
putchar (numbers[i]);
}
putchar ('\n');
return (0);
}
