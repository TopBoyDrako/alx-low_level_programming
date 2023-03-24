#include "main.h"

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine if a random number is positive, negative or zero.
(* 0 : is the number to be checked
 * Return: 0 on success
 */
void positive_or_negative(int i)
{

/* your code goes there */
if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
