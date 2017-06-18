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
/***
RecursionPracticeQuestions-UG1 problem 7
//Find the minimum element in an array of integers. Use recursion.
//Find the minimum element in an array of integers. Use recursion.
Input: 5 7 4 9 6 2
Output: 9
Find the Second Largest Element in an Array
http://algorithms.tutorialhorizon.com/find-the-second-largest-element-in-an-array/
http://users.csc.calpoly.edu/~dekhtyar/349-Spring2010/lectures/lec03.349.pdf
very very importent
http://www.techcrashcourse.com/2016/08/program-to-find-largest-and-second-largest-element-array.html
 * */
int min(int i, int n, int *a) ;
int main(){
    int n, m, a[] = {5, 7, 4, 9, 6, 2};
    n = 6;
    m = min(0, n, a);
    printf("%d\n", m);
    return 0;
}
int min(int i, int n, int *a){
    int m;
    if(i==n-1)
    	return a[i]; // the last value is the maximum for this step
    m = min(i+1, n, a);
    return ((a[i] < m)? a[i] : m);
}
