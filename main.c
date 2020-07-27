#include <stdio.h>
#include "Library/APABasics_Library.h"

//This function tests all the library's functions:

int main() {
    int a=100;
    int b= 770;
    long c =34;
    long d = 30;

    printf("data:\n "
           "a= %d\n"
           "b= %d\n"
           "c= %ld\n"
           "d= %ld\n",
           a,b,c,d);

    printf("factorial of c is %ld\n", fact(c));
    printf("dth fibonacci number is %ld\n", fib(d));
    printf("mcd between a and b  is %d\n", mcd(a,b));

    return 0;
}
