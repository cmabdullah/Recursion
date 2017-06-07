//============================================================================
// Name        : Factorial.cpp
// Author      : Abdullah
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int factorial(int a);
int main() {

	printf("%d",factorial(5));
	return 0;
}
int factorial(int n){
	if (n == 1)
	return 1;
	else
		return n = n * factorial(n-1);
}
