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
void rString();
//Write a recursive function to reverse a string.
int main(){
    printf("Enter a string\n");
    rString();
    return 0;
}
void rString(){
    char rs;
    scanf("%c", &rs);
    if( rs != '\n'){
    	rString();
        printf("%c",rs);
    }
}
