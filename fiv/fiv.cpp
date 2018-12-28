//============================================================================
// Name        : fiv.cpp
// Author      : C M Abdullah Khan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
	long long a;

	cin>>a;
    int temp;
	int b = 1;
	int c = 1;

	for(int i = 2;i<=a;i++)
	{
		temp = b+c;

		b = c;
		c = temp;

	}

	cout<<temp<<endl;
}
