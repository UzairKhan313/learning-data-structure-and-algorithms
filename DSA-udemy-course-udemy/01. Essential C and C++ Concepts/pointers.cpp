#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std ;

int main() {
	int a = 10; // varaible.
	int *p; // address variable.
	
	p = &a; //  store the address of a inside the variable p.
	
	cout<<*p<<endl;

	int *x;
	int y[5]={1,2,3,4,5};
	x = y;
	
	for(int i=0; i<5; i++){
		cout<<"Accessing using vairable "<<y[i]<<endl;
		cout<<"Accessing using Pointer "<<y[i]<<endl;
	}
	
	
	// Accessing heap using pointer.
	int *z;
	z = new int[5];
	z[0]=11;
	z[1]=22;
	z[2]=55;
	z[3]=33;
	z[4]=44;
	
	for(int i=0; i<5; i++){
		cout<<"Heap : "<<z[i]<<endl;
	
	}
	
	// Deleting Memory.
	delete []p
	
	return 0;
}
