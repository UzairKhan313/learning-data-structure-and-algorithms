#include <iostream>
#include <stdio.h>
using namespace std ;


void printArray(int a[], int n) {
	a[2] = 25;
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
	

}



// A fucntion that return array;
int *  funct( int size) {

	int  *p;
	p= new int[size];
	for(int i=0; i<size; i++){
		p[i] = i + 5;
	}
	
	return p;
}



// Main Fuction
int main( )
{
    int A[5] = {1,2,3,4,5};     
	cout<<" =========> Passed array to a function as parameter <=============="<<endl;  
	printArray(A, 5);
	
	cout<<" =========> Function that return a pointer to array of int. <=============="<<endl;
	int *parray, size = 5; 
	parray = funct(5);

	for(int i=0; i<size; i++){
		cout<<"Here is the element of Array : "<<parray[i]<<endl;
	}
	
	return 0;
}
