#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ap;

    unsigned int i = 0;

    va_start(ap, n);
    for (i = 0; i < n; i++)
    {
        printf("%i%c ", va_arg(ap, int), *separator);
    }
    va_end(ap);
}