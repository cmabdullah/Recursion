//============================================================================
// Name        : Problem 4.cpp
// Author      : Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

/***
Problem 4:
Write a recursive program to remove all odd integers from an array.
You must not use any extra array or print anything in the function.
Just read input, call the recursive function, then print the array in main().

Input:
5
2,4,5,8,10
Output:
2 4 8 10
***/

#include <iostream>
#include<stdio.h>
using namespace std;
void recurs(int i, int j, int *n, int *a);
int main(){
    int i, n, a[] = {2,4,5,8,10};
    n = 5;
    recurs(0, 0, &n, a);
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
void recurs(int i, int j, int *n, int *a){
    if(i==*n){
        *n = j; // resize value
        return;
    }
    if(a[i]%2==0){
        a[j] = a[i];
        j++;
    }
    recurs(i+1, j, n, a);
}
