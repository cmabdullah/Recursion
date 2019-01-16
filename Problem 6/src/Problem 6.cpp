//============================================================================
// Name        : Problem 6.cpp
// Author      : Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================
/***
Problem 6:
Write a recursive solution to evaluate the previous
polynomial for any given x and n. Like, when x=2 and n=5,
we have 1 + x + x2 + ................. + xn-1 = 31
the recursive formula for this may be: f(x, n) = x^n + f(x, n-1).
Input: 2 5
Output: 31
 * */
#include <iostream>
#include<stdio.h>
#include <math.h>
using namespace std;
int recurs(int i, int n, int x);
int main(){
    int n, value, x;
    n = 5;
    x = 2;
    value = recurs(0, n, x);
    printf("%d\n", value);
    return 0;
}
int recurs(int i, int n, int x){
	int val , p;
	printf("n : %d i : %d\n", n, i);
    if(n==0)
        return 1;
    if(i<n){
    val =  + recurs(i+1, n, x);
    p = (int)pow(x,i);
    printf("p : %d , val : %d \n", p , val);
        return val+p;
        }
    return 0;
}
/***
n : 5 i : 0
n : 5 i : 1
n : 5 i : 2
n : 5 i : 3
n : 5 i : 4
n : 5 i : 5
p : 16 , val : 0 
p : 8 , val : 16 
p : 4 , val : 24 
p : 2 , val : 28 
p : 1 , val : 30 
31
*/
