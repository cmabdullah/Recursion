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
int recurs(int i);
//Write a function using recursion to print numbers from n to 0.
int main() {
	int n;
	n = 5;
	recurs(n);

	return 0;
}
int recurs(int i){
	printf("%d ", i);

	if (i == 0)
		return 0;
	return recurs(i-1);

}
