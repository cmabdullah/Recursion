//============================================================================
// Name        : Problem 10.cpp
// Author      : Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

/***
Problem 10:
Write a recursive program to determine whether a given integer is prime or not.

Input:
49
999983
1

Output:
not prime
prime
not prime
 * */

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
/***
keep dividing upto sqrt(n) and if none succeeds,
the number is a prime, else not.
**/
int isprime(int i, int rt, int n);
int main(){
    int n,value;
    scanf("%d", &n);
    value = isprime(2, (int)sqrt(n), n);
        if(value == 1)
        	printf("prime\n");
        else
        	printf("not prime\n");

    return 0;
}
int isprime(int i, int rt, int n){
    if(n < 2)
    		return 0;
    if(i > rt)
    		return 1;
    if(n%i==0)
    		return 0;

    return isprime(i+1, rt, n);
}
