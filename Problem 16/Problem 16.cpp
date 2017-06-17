//============================================================================
// Name        : Problem.cpp
// Author      : C M Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <stdio.h>
int linearSearch(int i, int n, int v, int *a);
int main(){
    int a[100], n, q, v, x, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &q);
    for(i=0; i<q; i++){
        scanf("%d", &v);
        x = linearSearch(0, n, v, a);
        if(x==-1) printf("Not found\n");
        else printf("Found at %d\n", x);
    }
    return 0;
}
int linearSearch(int i, int n, int v, int *a){
    if(i==n)
    		return -1;
    if(a[i]==v)
    		return i;
    return linearSearch(i+1, n, v, a);
}
