#include <stdio.h>
#include <stdlib.h>
#include "Basic_Algorithms/Basic_Algorithms.h"
#include "OnLineConnectivity/OnLineConnectivity.h"

//test of the library's functions:

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

   //  printf("factorial of c is %ld\n", fact(c));
   //  printf("dth fibonacci number is %ld\n", fib(d));
    //  printf("mcd between a and b  is %d\n", mcd(a,b));
    // quick_find(10);

    //how much, and what number having 2 different cyphers we can obtain
    //using 4,9,1,0?
    int n=4;
    int k=2;
    int val[4]={4,9,1,0};
    int count=0;
    printf("that was disp, %d solutions",
            disp(0,val,malloc(k*sizeof(int)), calloc(n, sizeof(int)), n,k,count));
    printf("that was disp_rip, %d solutions \n",
            disp_rip(0,val,malloc(k*sizeof(int)),n,k,count));

    printf("that was perm, %d solutions\n",
            perm(0,val,malloc(n*sizeof(int)), calloc(n,sizeof(int)),n,count));

    return 0;
}