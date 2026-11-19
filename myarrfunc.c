#include "myarrfunc.h"
#include <stdio.h>

int index_if_bol_k(int *arr,int n, int k){
    int chet=0;
    for (int i=0; i<=n;i++){
        if (*(arr + i)> k){
            printf("%d",i);
            chet++;
        }
    }
    if (chet==0){
        printf("не найдено");
    }
    return chet;
}
int kol_index_max_min(int *arr,int n){
    if(n<2){
        printf("malo");
        return -1;
    }
    int min1= 0;
    int max1= 0;
    for (int i=1;i<n;i++){
        if(*(arr+i)<*(arr+min1)){
            min1=i;
        }
        else if (*(arr+i)>*(arr+max1)){
            max1=i;
        }
    }
    if (max1==min1){
        printf("odinakov");
        return -1;
    }
    int lev=min1;//     9 5 8 2 2 1   max=0,min=5 
    int prav=max1;//    0 1 2 3 4 5   
    if (min1>max1){
        lev = max1;
        prav = min1;
    }
    int chet=0;
    for (int i=lev+1;i<prav;i++){
        printf("%d",i);
        chet++;
    }
    if (chet==0){
        printf("net");
        return 0;
    }
    return chet;
}

int sum_elemen(int *arr, int n,int k){
    int sm=0;
    for (int i=0;i<n;i++){
        if (*(arr+i)>k){
            sm= sm+*(arr+i);
        }
    }
    return sm;
}