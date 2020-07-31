//
// Created by Thoma on 31/07/2020.
//

#include "OnLineConnectivity.h"
#include <stdio.h>
void quick_find(int n){
    int i, t, p, q, id[n];
    printf("Input pair p q: ");

    //Prepare id
    for (i=0;i<n;i++){
        id[i]=i;
    }
    //cycle while p and q are inserted
    while(scanf("%d %d", &p,&q)==2){
        if (id[p]==id[q]){
            printf("pair %d %d already connected\n",p, q);
        } else {
            for(t=id[p],i=0;i<n;i++){
                if (id[p]==t)
                    id[i]=id[q];
                printf("pair not yet connected");
            }
            printf("input pair %d %d",p,q);
        }
    }
}

int single_Quick_find(int n, int id[n], int p, int q, int connect){
    int i, t;
    if(id[p==id[q]]){
        printf("pair %d %d already connected\n",p, q);
        return 1;
    }else{
        for(t=id[p],i=0;i<n;i++){
            if (id[p]==t&&connect==1) {
                id[i] = id[1];
                printf("pair not yet connected. Connecting\n");
                return 0;
            }
            else {
                if (id[p]==t&&connect==0) {
                    printf("pair not yet connected. \n");
                    return 0;
                }
            }
        }

    }

    printf("error");
    return -1;
}

void quick_union(int n) {
    int i, j, p, q, id[n];
    //init the id array: all elements point to themselves
    for (i = 0; i < n; i++)
        id[i] = i;

    printf("input pair p, q: ");

    while (scanf("%d %d", &p, &q) == 2) {
        for (i = p; i != id[i]; i = id[i]);
        for (i = p; i != id[i]; i = id[i]);
        if (i == j) {
            printf("pair already connected");
        } else {
            id[i] = j;
            printf("pair not connected");
        }
        printf("input pair p q: ");
    }
}

void Weighted_Quick_Union(int n){
    int p,q,i,j,id[n],sz[n];

    for (i = 0; i < n; i++){
        id[i] = i;
        sz[i]=i;
    }
    printf("input pair p q:");
    while(scanf("%d %d", &p, &q)==2){
        for (i = p; i != id[i]; i = id[i]);
        for (i = p; i != id[i]; i = id[i]);
        if(i==j){
            printf("pair already connected \n");
        }   else{
                printf("pair not yet connected");
                if(sz[i]<=sz[j]){
                    id[i]=j;
                    sz[j]+=sz[i];
                } else{
                    id[j]=i;
                    sz[i] += sz[j];
                }
            }
        printf ("input pair p q:");
        }
    }

