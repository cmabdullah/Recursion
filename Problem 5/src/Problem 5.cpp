//============================================================================
// Name        : Problem 5.cpp
// Author      : Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<stdio.h>
using namespace std;
/****
Input: 5
Output: 1 + x + x^2 + x^3 + x^4
**/
void recurs(int i, int j);
int main(){
    int n = 10;
    recurs(0, n);
    return 0;
}
void recurs(int i, int j){
    if (i<j){
        if(i==0)
            printf("1 + ");
        else if (i == 1){
            printf("x + ");
        }
        else{
            if(i>1)
                printf("x^%d ", i);
            if (i<j-1)
                printf(" + ");
        }
    recurs(i+1, j);
    }
}
