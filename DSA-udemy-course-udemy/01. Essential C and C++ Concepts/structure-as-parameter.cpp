#include <iostream>
#include <stdio.h>
using namespace std ;

// Defining structure.
struct Rectangle
{
    int length;
    int breath;
};

// Structire as Call bu value
int area(struct Rectangle r1) {
	int area = r1.length * r1.breath;
	return area;
}


// Structire as Call by Reference
int area2(struct Rectangle &r1) {
	r1.length = 100;
	int area = r1.length * r1.breath;
	return area;
}



// Structire as Call by Address
void changeLength(struct Rectangle *p, int l) {
	p->length = l;

}

// Main Fuction
int main( )
{
	cout<<"======> Passing Structure as Parameter to the function. (Call by Value) <=========="<<endl;
    struct Rectangle r = { 10, 5 };
    cout<<"Area of Rectangle is : "<<area(r)<<endl;
    cout<<endl;
    cout<<endl;
    
    
    cout<<"======> Passing Structure as Parameter to the function (Call by reference) <=========="<<endl;
    struct Rectangle r1 = { 10, 5 };
    cout<<"Area of Rectangle is : "<<area2(r1)<<endl;
    cout<<endl;
    cout<<endl;
        
    cout<<"======> Passing Structure as Parameter to the function (Call by Address) <=========="<<endl;
    struct Rectangle r3 = { 30, 2 };
    changeLength(&r3, 200);
     cout<<"Length of Rectangle is change by the other function : "<<r3.length<<endl;
 
}
