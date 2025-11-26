#include <iostream>
#include <stdio.h>
using namespace std ;

// Defining Class.
class Rectangle {
	private:
		int length;
    	int breath;
    
    public:
    	Rectangle(int l, int b){
    		length = l;
    		breath = b;
		}
		
		int area() {
			return length * breath;
		}
		
		void changeLength(int l){
			length = l;
		}
		
		void getLength(){
			cout<<"Length of Rectanlge is : "<<length<<endl;
		}
		
};




// Main Fuction
int main( )
{
	cout<<"======> Object oriented programming.. <=========="<<endl;
	int l, b;
	cout<<"Enter the Length of a Rectangle"<<endl;
	cin>>l;
	cout<<"Enter the Breath of a Rectangle"<<endl;
	cin>>b;
	
	Rectangle r(l, b);
	cout<<"Area of Rectanlge is : "<<r.area()<<endl;
	r.getLength();
return 0;
}
