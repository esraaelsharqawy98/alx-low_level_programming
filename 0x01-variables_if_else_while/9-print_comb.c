#include <stdio.h>
/**
 * main - print the prints all possible combinations of single-digit numbers 
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
if (num < 9)
{
putchar(',');
putchar(' ');
}
if(num == 9){
 putchar('$');
}
}
putchar('\n');
return (0);
}
