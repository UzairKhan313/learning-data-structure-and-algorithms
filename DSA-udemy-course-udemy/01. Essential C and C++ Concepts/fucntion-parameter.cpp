#include <iostream>
#include <stdio.h>
using namespace std ;



// Pass by value or call by value.
void swape(int x, int y) {
	int temp = x;
	x = y;
	y=temp;
}



// Pass by Address .
void swap2(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y=temp;
}


// Pass by Reference.
void swap2(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y=temp;
}

// Main Fuction
int main( )
{
    int a = 10,b=20;
    
      
	cout<<" =========> Call by value  <=============="<<endl;  
	cout<<"Before swap A value is : "<<a<< " B value is "<<b<<endl;
	swape(a,b);
	cout<<"After swap A value is : "<<a<< " B value is "<<b<<endl;
	cout<<endl;
	cout<<endl;
	
	
	cout<<" =========> Call by Address or Pointers.  <=============="<<endl;  
	cout<<"Before swap A value is : "<<a<< " B value is "<<b<<endl;
	swap2(&a,&b);
	cout<<"After swap A value is : "<<a<< " B value is "<<b<<endl;
	cout<<endl;
	cout<<endl;
	
	return 0;
}
