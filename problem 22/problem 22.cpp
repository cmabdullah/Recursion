//============================================================================
// Name        : problem.cpp
// Author      : C M Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;
int B(int  n,int k);
/**
//static method
int main(){
    int m, x, binom;
    m = 0;
        while(m<=10){
        x = 0; binom = 1;
        while(x <= m){
            if (m==0 || x == 0)
                printf("%4d", binom);
            else{
                binom = binom * (m -x + 1)/x;
                printf("%4d",binom);
            }
            x = x+1;
        }
        printf("\n");
        m = m+1;
    }
}
**/

int main(){
    int x = 10, y = 4, binom;
    binom = B(x, y);
    printf("%d ", binom);
    return 0;
}
int B(int  n,int k){
    int a, b;
///http://www.math.tamu.edu/~berko/teaching/preREU2010/example_paper.pdf
///B(n; k) = B(n − 1; k − 1) + B(n − 1; k)
///B(n; k) = B(n − 1; k − 1) + B(n − 1; k); 1 ≤ k ≤ n − 1
    if (k != 0 && n != k){
        a =  B(n-1, k-1);
        b = B(n-1, k) ;
        return a + b;
        }
    else
        return 1;
}

