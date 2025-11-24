#include <iostream>
#include <stdio.h>
using namespace std ;

// Defining Class.
template <class T>
class Arthimathic {
	private:
		T a;
    	T b;
    
    public:
    	Arthimathic(T a, T b);
		T add();
		T subtract();
    	
};
  
  	template <class T>
    Arthimathic<T>::Arthimathic(T a, T b){
    		this->a = a;
    		this->b = b;
		}
		
	template <class T>	
	T Arthimathic<T>::add() {
			return a + b;
		}
		
		
	template <class T>	
	T Arthimathic<T>::subtract() {
			return a - b;
		}
		
	
		





// Main Fuction
int main( )
{
	Arthimathic<int>  a(10, 5);
	Arthimathic<float>  a1(10.5, 5.8);
	cout<<"======> Object oriented programming.. <=========="<<endl;
	cout<<"Addition is For Int  "<<a.add()<<endl;
	cout<<"Subtraction is Int "<<a.subtract()<<endl;
	
	
	cout<<endl;
	cout<<"Addition is For Float  "<<a1.add()<<endl;
	cout<<"Subtraction is Float "<<a1.subtract()<<endl;

	return 0;
}
