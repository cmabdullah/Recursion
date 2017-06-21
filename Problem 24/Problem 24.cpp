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
void recurs(char *reverse);
int main(){
   char arr[100];
   scanf("%s", &arr);
   recurs(arr);
   return 0;
}
void recurs(char *reverse){
   if (*reverse){
	   recurs(reverse+1);
       printf("%c", *reverse);
   }
}
