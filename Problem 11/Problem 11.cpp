//============================================================================
// Name        : Problem 11.cpp
// Author      : Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;
int gcd(int a, int b);
/***
Write a recursive function that finds the gcd of two non-negative integers.
Input:
25 8895
Output:
5
 * */
int main(){
    int x, y, value;
    scanf("%d %d", &x, &y);
    value = gcd(x, y);
    printf("%d\n", value);
    return 0;
}
int gcd(int i, int j){
    if(j==0)
    		return i;
    return gcd(j, i%j);
}
