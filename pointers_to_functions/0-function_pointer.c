#include <stdio.h>

/**
 * @brief 
 * 
 */

void fun(int a)
{
    printf("Value of a is %d\n", a);
}

int main()
{
    /* fun_ptr is a pointer to function fun()
     * The below is the same as these 2:
     * void (*fun_ptr)(int);
     * fun_ptr = &fun;
     */
    void (*fun_ptr)(int) = &fun;

    /* Invoking fun() using fun_ptr */
    (*fun_ptr)(10);

    return (0);
}