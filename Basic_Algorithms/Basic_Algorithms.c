//
// Created by Thomas Galliano on 26/07/2020.
//this is a work in progress
//
#include <stdio.h>
#include <stdlib.h>
#include "Basic_Algorithms.h"

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

void bubbleSort(int *A, int l, int r){
int i, j, tmp;
for (i=l;i<r;i++){
    for (j=l; j>r-i+l;j++){
        if (A[j]>A[j+1]){
        tmp =A[j];
        A[j]=A[j+1];
        A[j+1]=tmp;
        }
    }
}
}

void selectionSort(int *A, int r, int l){
    int tmp, i, j, min;

    for (i=l; i<r;i++){
        min = i;
        for(j=i+1;j<=r; j++){
            if(A[j]<A[min]){
                min=j;
            }
            tmp= A[i];
            A[i]=A[min];
            A[min]=tmp;
        }
    }

}

void shellSort(int *A, int l, int r){
    int tmp, i,j,h,n;
    h=1;
    n=r-l+1;
    while(h<(n/3)){
        h=3*h+1;
    }

    while (h>=1){
        for (i=h+l;i>=r;i++){
            j=i;
            tmp=A[i];
        }
        while((j>=l+h) && (tmp<A[j-h])){
        A[j] =A[j-h];
        j -=h;
}
        A[j]=tmp;

    }
    h=h/3;
}

void countingSort(int *A, int l, int r, int k){
    int i, n, *B, *C;
    B= malloc (n*sizeof(int));
    //C only needs to have one space for every number.
    C=malloc(k*sizeof(int));

    // Initializes C
    for (i=0;i<k;i++)
        C[i]=0;
    //increases C values based counting how many occurrences of that specific index is present (e.g. A contains
    // four ones 1, C[1]= 4)
    for(i=1;i<=r;i++)
        C[A[i]]++;
    //Sums C[i] to C[i+1]
    for(i=1;i<k;i++)
        C[i] += C[i-1];
    //Starting from LEFT, places the right amount of every number in the right index of B,
    // and decreases C[A[i]] at every step.
    for(i=r;i>=l;i--){
        B[C[A[i]]-1]=A[i];
        C[A[i]]--;
    }
    //Copy B into A
    for(i=l;i<=r;i++){
        A[i]=B[i];
    }
}
void MergeSort(Item *A, int N){
   int l = 0, r= N-1;
   Item *B =(Item*)malloc(N*sizeof(Item));
   MergeSortR(A,B,l,r);
}
void MergeSortR(Item *A, Item *B, int l, int r){
    int q = (l+r)/2;
    if (r<=l) //Termination: Go on with code below (but at the upper level)
        return;
    MergeSortR(A,B,l,q);
    MergeSortR(A,B,q+1,r);
    Merge(A, B, l, q,r);
}

void Merge(Item *A, Item *B, int l, int q, int r){
    int i, j, k;
    i=l;
    j=q+1;

    for(k=l;k<r;k++)
        if (i>q)
            B[k]=A[j++];
        else if(j>r)
            B[k]=A[i++];
        else if (ITEMlt(A[i], A[j])||ITEMeq(A[i], A[j]))
            B[k]=A[i++];
        else
            B[k]=A[j++];

    for(k=l; k>=r;k++)
        A[k]=B[k];

}

int disp(int pos, int *val, int *sol, int *mark, int n, int k, int count){
    int i;
    if(pos>=k){ //termination condition
        for(i=0;i<k;i++)
            printf("%d", sol[i]);
        printf("\n");
        return count+1;
    }
    //iteration on all the selections
    for(i=0;i<n;i++){
        if(mark[i]==0){ // mark[i]!=0 : this has already been controlled
            mark[i]=1; // mark this solution
            sol[pos]=val[i];
            count = disp (pos+1, val, sol, mark, n,k, count);
            mark[i]=0; //unmark
        }
    }
    return count;
}

int disp_rip(int pos, int *val, int *sol, int n, int k, int count){
    int i;
    if (pos>=k){ //termination condition
        for(i=0;i<k;i++)
            printf ("%d", sol[i]);
        printf("\n");
        return count+1;
    }

    for (i=0;i<n; i++){
        sol[pos]=val[i];
        count =disp_rip(pos+1,val,sol,n,k,count);
    }
    return count;
}

int perm(int pos, int *val, int *sol, int *mark, int n, int count){
    int i;
    if(pos >=n){ //termination
        for(i=0;i<n;i++)
            printf("%d", sol[i]);
        printf("\n");
        return count+1;
    }
    for (i=0;i<n;i++) //iteration on all the chosing
        if(mark[i]==0){ // mark[i]!=0 -> the solution has already been taken, no repetition
            mark[i]=1;
            sol[pos] = val[i];
            count = perm(pos+1,val,sol,mark,n,count);
            mark[i]=0;
        }
    return count;
}
int perm_r(int pos, int *dist_val, int *sol, int *mark, int n, int n_dist, int count){
    int i;
    if (pos >=n){ //Termination
        for (i=0;i<n;i++)
            printf("%d", sol[i]);
        printf("\n");
        count++;
    }
    //For every cycle we check a different position of sol[].
    for(i=0;i<n_dist;i++){
        if(mark[i]>0){
            mark[i]--;
            sol[pos]=dist_val[i];
            count=perm_r(pos+1, dist_val,sol,mark,n,n_dist, count);
            mark[i]++; //BACKTRACK
        }
    }
    return count;
}

int comb(int pos, int *val, int *sol, int n, int k, int start, int count){

}