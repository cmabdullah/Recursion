//============================================================================
// Name        : Problem 1.cpp
// Author      : Abdullah
// Version     : 1.0
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================
/***
 * You will be given an array of integers,
 * write a recursive solution to print it in reverse order.
 * Input: 5 69 87 45 21 47 Output: 47 21 45 87 69
 * */
#include <iostream>
using namespace std;
void reverse  (int i);
int main() {

	reverse(5);
	return 0;
}

void reverse (int i){
	int arr[] = {1,2,3,4,5,7};
	printf("index[%d] %d \n",i, arr[i]);
	if (i == 0)
	return   ;
	else
		reverse (i-1 );
}
