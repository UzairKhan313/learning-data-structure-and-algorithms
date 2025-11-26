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
    struct Rectangle r ; 	 	 	 //Declaration
    struct Rectangle r1 = { 10, 5 }; //Declaration + Initialisation
        

    r.length = 15 ;	 	 	 	 // . Is is used to access a member
    r.breath = 10 ;
    printf(" Area of rectangle is 1 %d" , r.length * r.breath) ; // Accessing the members.
 	printf("\n Area of rectangle is 2 %d" , r1.length * r1.breath ) ; // Accessing the members.
}
