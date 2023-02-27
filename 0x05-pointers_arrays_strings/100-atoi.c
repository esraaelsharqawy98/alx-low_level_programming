#include "main.h"
#include<stdbool.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int num = 0;
int i = 0;
bool isNegetive = false;
if(s[i] == '-'){
isNegetive = true;
i++;
}
while (s[i] && (s[i] >= '0' && s[i] <= '9')){
num = num * 10 + (s[i] - '0');
i++;
}
if(isNegetive) num = -1 * num;
return num;
}
