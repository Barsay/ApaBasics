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
        int i=0,j=0;
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

        //----------------------//
        int n=4;
        int k=2;
        int *val = malloc (4*sizeof(int));
        val[0]=0;
        val[1]= 10;
        val[2]=4;
        val[3]=8;
        int count=0;

        printf("that was disp, %d solutions",
                disp(0,val,malloc(k*sizeof(int)), calloc(n, sizeof(int)), n,k,count));
        printf("that was disp_rip, %d solutions \n",
                disp_rip(0,val,malloc(k*sizeof(int)),n,k,count));

        printf("that was perm, %d solutions\n",
                perm(0,val,malloc(n*sizeof(int)), calloc(n,sizeof(int)),n,count));
        printf("that was comb, %d solutions\n",
                comb(0,val,malloc(k*sizeof(int)),n,k,0,0));
        printf("that was comb_r, %d solutions\n",
                comb_r(0,val,malloc(k*sizeof(int)),n,k,0,0));

        //"The menu", example for molt_princ
        //A menu contains 2 first dishes, 3 second dishes, 2 desserts. Explore all the possible
        //combinations.

        free(val);

        n=3; //3 levels
        i=0; //counter
        Level firstDishes;
        Level secondDishes;
        Level dessert;
        firstDishes.numberOfChoices=2;
        secondDishes.numberOfChoices=3;
        dessert.numberOfChoices=2;

        firstDishes.choices= malloc(firstDishes.numberOfChoices*sizeof(int));
        secondDishes.choices=malloc(secondDishes.numberOfChoices*sizeof(int));
        dessert.choices=malloc(dessert.numberOfChoices*sizeof(int));

        Level *menu= malloc(n*sizeof(Level)); //array of levels
        menu[0]=firstDishes;
        menu[1]=secondDishes;
        menu[2]=dessert;

        for(i=0;i<n;i++){
            for (j=0;j<menu[i].numberOfChoices;j++){
                menu[i].choices[j]=j;
            }
        }


    printf("that was the menu, %d solutions\n",
           molt_princ(0,menu,malloc(n*sizeof(int)),n,0));

        return 0;
}