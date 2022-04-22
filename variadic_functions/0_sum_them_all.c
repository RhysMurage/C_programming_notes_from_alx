#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all- function that sums all the parameters
 *  
 * @n: number of parameters 
 * @...: parameters
 * Return: sum of parameters; 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list ap;

    unsigned int i = 0;
    int sum = 0;

    va_start(ap, n);
    for (i = 0; i < n; i++)
    {
        sum += va_arg(ap, int);
    }

    va_end(ap);

    return (sum);

}
