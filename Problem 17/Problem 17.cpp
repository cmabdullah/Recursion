//============================================================================
// Name        : Problem.cpp
// Author      : C M Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;
int recurs(int i, int n,int *a);
//Count the number of zeros in an array of integers. Use recursion.
int main() {
	int count, arr[5] = {2,4,0,6,0};
	count  = recurs(5,0, arr);
	printf("%d", count);
	return 0;
}
int recurs(int i, int n,int *a){
	if (a[i]== 0)
		n++;
	if (i == 0)
		return n;
	return recurs(i-1, n,a);
}
