
//============================================================================
// Name        : Problem.cpp
// Author      : C M Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Find the sum of the integers from 1 through n. Use recursion.
 *(RecursionPracticeQuestions-UG1, problem 2)
 *(RecursionPracticeQuestions-UG1, 1+2+3+4 = 10
 */
#include <iostream>
#include <cstdio>
using namespace std;
int recurs  (int i, int sum);
int main(){
	int x;
	x = recurs(4, 0);
	printf("%d", x);
}
int recurs  (int i, int sum){
	if (i == 0)
		return sum;
	sum = sum + i;
	return recurs(i-1, sum);
}

