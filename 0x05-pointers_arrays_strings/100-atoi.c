#include <stdio.h>
#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: this is the string
* Return: Always as multiply by sign.
*/

int _atoi(char *s)

{
unsigned int as = 0;
int i = 0;
int sign = 1;
int itsi = 0;


while (s[i])
{
if (s[i] == '-')
{
sign = -1;
i++;
}




while ((s[i] >= 48 && s[i] <= 57))
{
itsi = 1;
as = (as * 10) + (s[i] - '0');
i++;
}

if (itsi == 1)
{
break;
}
i++;
}

as *= sign;
return (as);
}
