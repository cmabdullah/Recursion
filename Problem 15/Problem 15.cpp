//============================================================================
// Name        : Problem.cpp
// Author      : C M Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;
/**
Problem 12:
Write a recursive solution to find the second maximum number from a given set of integers.

Input:
5
5 8 7 9 3
Output:
8
 * */
void SecondMax(int i, int n, int *a, int *fbest, int *sbest);
int main(){
    int n, i, a[100];
    int fbest, sbest;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    sbest = fbest = a[0];
    SecondMax(0, n, a, &fbest, &sbest);
    printf("%d\n", sbest);
    return 0;
}
void SecondMax(int i, int n, int *a, int *fbest, int *sbest){
    if(i==n-1){
        *fbest = a[i];
        return;
    }
    // the following if() is a trick
    // to avoid ambiguity
    if(*sbest < a[i]) *sbest = a[i];
    SecondMax(i+1, n, a, fbest, sbest);
    if(a[i] > *fbest){
        *sbest = *fbest;
        *fbest = a[i];
    }
    else if(a[i] > *sbest)
    		*sbest = a[i];
}


