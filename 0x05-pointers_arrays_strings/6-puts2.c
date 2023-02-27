#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: string as input
 */
void puts2(char *str)
{
int i, length = 0, last = 0;
char *p = str;
while (*y != '\0')
{
p++;
length++;
}
last = length - 1;
for (i = 0 ; i <= last ; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
