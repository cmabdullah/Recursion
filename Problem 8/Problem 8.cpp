//============================================================================
// Name        : Problem.cpp
// Author      : Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;
/***
Problem 8:
Write a recursive program to print fibonacci series.
1st and 2nd fibonacci numbers are 1, 1.

Input:
6
Output:
1 1 2 3 5 8
 * **/
void recurs(int x,int y ,int a);
int main() {
	int x,y,n;
		x = 1;
		y = 1;
		n = 6;
	printf("1 1 ");
	recurs(x,y,n);
	return 0;
}
void recurs(int x,int y ,int n){
	int  z;
	if (n > 2){
		z = x+y;
		printf("%d ", z);
		x = y;
		y = z;
		recurs(x, y, n-1);
	}
}
