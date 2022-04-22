#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list ap;

    unsigned int i = 0;

    va_start(ap, n);
    for (i = 0; i < n; i++)
    {
        char c = va_arg(ap, int);
        _putchar(c);
        _putchar(*separator);
    }

    va_end(ap);
}