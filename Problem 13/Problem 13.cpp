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
int lcm(int a, int b, int m);
/***
Problem 12:
Write a recursive solution to compute lcm of two integers.
You must not use the formula lcm(a,b) = (a x b) / gcd(a,b);
find lcm from scratch...
Input: 23 488
Output: 11224
 * */
int main(){
    int a, b, l;
    a = 12;
    b = 20;
    l = lcm(a, b, 1);
    printf("%d\n", l);
    return 0;
}
int lcm(int a, int b, int m){
    if(a*m % b == 0){
    	return a*m;
    }
    return lcm(a, b, m+1);
}
