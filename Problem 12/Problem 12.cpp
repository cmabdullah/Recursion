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
int gcd(int a, int b);
int lcm(int a, int b);
/**
Problem 12:
Write a recursive solution to compute lcm of two integers.
use this formula lcm(a,b) = (a x b) / gcd(a,b);
Input: 23 488
Output: 11224
 * */
// Recursive function to return gcd of a and b
int main(){
    int a , b , value;
    a = 23;
    b = 488;
    value = lcm(a, b);
    printf("%d\n", value);
    return 0;
}
int gcd(int a, int b){
    // base case
    if (a == b)
        return a;
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
 // Function to return LCM of two numbers
int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}
