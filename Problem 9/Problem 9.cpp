//============================================================================
// Name        : Problem.cpp
// Author      : Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;
/****

Write a recursive program to compute nth fibonacci number.
1st and 2nd fibonacci numbers are 1, 1.
Input:
6
Output:
8
 * */
long long int fib(long long int n);
int main(){
	long long int n, value;
    scanf("%lld",&n);
    value = fib(n);
    printf("%lld\n", value);
    return 0;
}
long long int fib(long long int n){
    if(n<3)
    	return 1;
    else
    return fib(n-2) + fib(n-1);
}
