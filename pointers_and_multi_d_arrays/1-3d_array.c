#include <stdio.h>

int main()
{
    int test[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},  
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};
   /*a*/ printf("Address of {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}} using *test is %d", *test);
   /*b*/ printf("\nAddress of {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}} using test is %d\n", test);

   /*c*/ printf("\nAddress of {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}} using test is %d\n", test + 1); /* +48 from (a) because there are 12 integers taking 4 bytes each */
    // printf("\nAddress of {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}} using *test is %d", *(test + 1));

   printf("\nAddress of {3, 4, 2, 3} using *test is %d", *(test));
   /*d*/ printf("\nAddress of a{0, -3, 9, 11} using *test is %d", *(test) + 1); /* +16 (4 integers @ 4bytes) to the address from a or b*/
   /*e*/ printf("\nAddress of {23, 12, 23, 2} using *test is %d\n", *(test) + 2); /* +16 (4 integers @ 4bytes) to the address from d*/    

   /*d*/ printf("\nAddress of {13, 4, 56, 3} using *test is %d", *(test+1));
   /*g*/ printf("\nAddress of {5, 9, 3, 5} using *test is %d", *(test+1) + 1); /* +16 (4 integers @ 4bytes) to the address from c or d*/
   /*h*/ printf("\nAdgress of {3, 1, 4, 9} using *test is %d\n", *(test+1) + 2); /* +16 (4 integers @ 4bytes) to the address from g*/

   /*i*/ printf("\nAddress of 3 or {3, 4, 2, 3} using *test is %d", *(*(test)));
   /*j*/ printf("\nAddress of 4 in {3, 4, 2, 3} using *test is %d", *(*(test)) + 1);

   /*k*/ printf("\nValue of 3 or {3, 4, 2, 3} using *test is %d", *(*(*(test))));
   /*l*/ printf("\nAddress of 4 in {3, 4, 2, 3} using *test is %d", *(*(*(test))) + 1);
}

