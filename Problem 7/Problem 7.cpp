//============================================================================
// Name        : Problem 7.cpp
// Author      : Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
// Compiler    : Eclipse CDT ( C/C++ Development Tools)
// Date        : 5-02-17
// Path        :/Users/abdullah/Documents/
//============================================================================
/***
Write a recursive program to compute n!
Input:
5
Output:
120
 * */
#include <iostream>
#include <stdio.h>
using namespace std;
int factorial(int a);
int main() {
	int x;
	x = factorial(5);
	printf("%d",x);
	return 0;
}
int factorial(int n){
	int x ;
	printf("n : %d \n" , n);
	if (n == 1){
	//printf("Mr N->1 : %d\n", n);
	return 1;
	}
	
	else{
		x = n * factorial(n-1);
		printf("Mr N : %d", n);
		printf("\n factorial : %d \n", x);
		//return n = n * factorial(n-1);
		return x;
	}
}
/****
n : 5 
n : 4 
n : 3 
n : 2 
n : 1 
Mr N : 2
 factorial : 2 
Mr N : 3
 factorial : 6 
Mr N : 4
 factorial : 24 
Mr N : 5
 factorial : 120 
120
*/