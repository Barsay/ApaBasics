//
// Created by Thomas Galliano on 26/07/2020.
//
#include <stdio.h>




long fact (long n ){
    if(n==0){
        return 1;
    }
    return (n+fact(n-1));
}

long fib (long n){
    if(n==0 || n==1){
        return (n);
    }
    return (fib (n-1)+fib(n-2));
}

int mcd(int x, int y){
    if(y==0){
        return x;
    }
    return (mcd(y,x%y));
}





