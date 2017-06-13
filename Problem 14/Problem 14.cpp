//============================================================================
// Name        : Problem 14.cpp
// Author      : C M Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;
/***
Suppose you are given an array of integers in an arbitrary order.
Write a recursive solution to find the maximum element from the array.
Input: 5 7 4 9 6 2
Output: 9
 * */
int Max(int i, int n, int *a) ;
int main(){
    int n, m, a[] = {5, 7, 4, 9, 6, 2};
    n = 6;
    m = Max(0, n, a);
    printf("%d\n", m);
    return 0;
}
int Max(int i, int n, int *a){
    int m;
    if(i==n-1)
    	return a[i]; // the last value is the maximum for this step
    m = Max(i+1, n, a);
    return ((a[i] > m)? a[i] : m);
}
