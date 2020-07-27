//
// Created by Thomas Galliano on 26/07/2020.
//this is a work in progress
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


int det2x2(int m[2][2]){
    return (m[0][0]*m[1][1]-m[0][1]*m[1][0]);
};
/*
int minore(int **m,int i, int j, int n, int **m2){
    int r, c;
    for(r=0;r<n-1;r++){
        if(r!=i){
            int rr=r;
            if(r>i) rr--;
            for(c=0; c<n-1;c++) {
                if (c!=j) {
                    int cc = c;
                    if (c>j) cc--;
                    m2[rr][cc]= m[i][j];
                }
            }
        }
    }
}

int determinant(int n, int a[][n] ){
    int sum, k, i, j, r,c;
    int tmp[n][n];
    sum=0;
    if (n==2){
    return (det2x2(a));
    }
    for(k=0;k<n;k++){
        minore(a,0,k,n,tmp);
        sum=sum + a[0][k]*pow(-1,k)*determinant(tmp,n-1);
    }
}
*/









