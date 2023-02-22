#include <main.h>
/**
 * main - make program prints _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[8] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar (str[i]);
i++;
}
_putchar ('\n');
return (0);
}
