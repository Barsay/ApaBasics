#include <stdio.h>
#include "Basic_Algorithms/Basic_Algorithms.h"
#include "OnLineConnectivity/OnLineConnectivity.h"

//This function tests all the library's functions:

void printmatrix(int **m, int i, int j);

int main() {
    int a=100;
    int b= 770;
    long c =34;
    long d = 30;
    int matrix2x2[2][2];

    printf("data:\n"
           "a= %d\n"
           "b= %d\n"
           "c= %ld\n"
           "d= %ld\n",
           a,b,c,d);

    printf("factorial of c is %ld\n", fact(c));
    printf("dth fibonacci number is %ld\n", fib(d));
    printf("mcd between a and b  is %d\n", mcd(a,b));

    quick_find(10);
    return 0;
}

void printmatrix (int **m, int i, int j) {

}