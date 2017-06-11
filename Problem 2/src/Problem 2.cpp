//============================================================================
// Name        : Problem.cpp
// Author      : Abdullah
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
 using namespace std;
/**************
algorithm
[0] [n-1]
[1] [n-2]
.
.
.
.
.
[(n-1)/2] [n/2]
***/
 void recurs(int i, int j);
 int main(){
    int n = 10;
    recurs(0, n-1);
    return 0;
 }
void recurs(int i, int j){
    int a[] = {2,4,5,8,10,12,13,14,15,16};
    if(i<=j){
    printf("%d\t %d\n", a[i],a[j]);
    recurs(i+1, j-1);
    }
}
