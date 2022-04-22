#include <stdarg.h>
#include <stdio.h>

int add(int args, ...)
{
    /*args is the number of arguments*/

    /*first define variable list variable*/
    va_list ap;

    /*takes in the variable parameters and the number of arguments */
    va_start(ap, args);

    /*process of adding all integers*/
    int i = 0, sum = 0;

    /*loop through the number of arguments*/
    for (i = 0; i < args; i++)
    {
        /**
         * var_arg- in this context, we go through the item list and add it to the sum
         * first parameter is the variable parameter
         * second parameter is the type
         */
        sum += va_arg(ap, int);
    }

    /*only takes in the variable parameters*/
    va_end(ap);
    return (sum);
}

int main(void)
{
    printf("Add = %d\n", add(3,1,2,3));
    return 0;
}