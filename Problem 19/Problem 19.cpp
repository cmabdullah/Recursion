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
int recurs(int i, int j);
//Write a function using recursion to print numbers from n to 0.
int main() {
	int n;
	n = 5;
	recurs(n, 0);

	return 0;
}
int recurs(int i, int j){
	printf("%d ", j);

	if (i == j)
		return 0;
	return recurs(i, j+1);

}
