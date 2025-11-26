#include <iostream>
#include <stdio.h>


using namespace std ;

int main() {

	int a = 10;
	int &r = a; // reference variable and it must be inilized.
	
	a++;
	cout<<a<<endl;
	r++;
	cout<<r<<endl;

	
	return 0;
}
