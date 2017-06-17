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
int product( int n1, int n2);
int main(){
       int n1, n2, result;
       n1 = 4;
       n2 = 4;
       result = product( n1, n2 );
       printf("%d", result );
}
int product (int n1,int n2){
     if (n2 == 0)
          return 0;
     else
          return n1 + product ( n1, n2 - 1);
}
