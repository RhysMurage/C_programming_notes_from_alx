#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char s[] = "Best School";
    char *ptr;
    ptr = malloc(sizeof("Best School")+1);
    printf("%d\n", *ptr);
    // return (0);
}
