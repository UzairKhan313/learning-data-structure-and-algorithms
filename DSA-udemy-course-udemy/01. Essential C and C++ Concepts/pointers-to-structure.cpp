#include <iostream>
#include <stdio.h>
using namespace std ;

// Defining structure.
struct Rectangle
{
    int length;
    int breath;
};

// Main Fuction
int main( )
{
    Rectangle r = { 10, 5 }; //Declaration + Initialisation
    Rectangle *p = &r;
	
	cout<<"Accessing through the struct varaiable : "<<r.length<< " "<<r.breath<<endl;
    p->length = 20;
   
        
	cout<<"Accessing through the pointer p : "<<p->length<< " "<<p->breath<<endl;
	
	struct Rectangle *p2;
	p2 = new Rectangle;
	
	p2->length = 12;
	p2->breath = 7;  
        
	cout<<"Accessing through the pointer p : "<<p2->length<< " "<<p2->breath<<endl;
	
	return 0;
}
