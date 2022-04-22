#include <stdio.h>

void fun(int a)
{
    printf("Value of a is %d\n", a);
}

int main()
{
    /* fun_ptr is a pointer to fun()*/
    void(*fun_ptr)(int) = &fun;
    /* The above is the same as:
        void (*fun_ptr)(int);
        fun_ptr = &fun;
    */

    /* Invoking fun() using fun_ptr
    */
    (*fun_ptr)(10);
    return (0);
}

