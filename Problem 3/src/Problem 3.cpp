//============================================================================
// Name        : Problem 3.cpp
// Author      : Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

/***
Problem 3:
Write a recursive program to remove all odd integers from an array.
You must not use any extra array.

Input:
5
2,4,5,8,10
Output:
2 4 8 10
***/
#include <iostream>
#include<stdio.h>
 using namespace std;
 void recurs(int i, int n);
 int main(){
    recurs(0,5);
    return 0;
 }
void recurs(int i,int n){
    int a[] = {2,4,5,8,10};
    int j = 0;
    if(i< n){
            if (a[i]%2 == 0){
                printf("%d ", a[i]);
            }
    recurs(i+1, n);
    }
    else
        return  ;
}
