#include "main.h"

/**
 * print_last_digit - prints the last digit of a n
 * @n: the number to be treated
 * Return: value of the last digit of number
 */

int print_last digit(int n)
{
int last;

last _  n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
