#include <iostream>
using namespace std;


int addition(int a,int b); //function declaration

int main()
{
	int num1;	
	int num2;	
	int add;	 
	

	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	
	add=addition(num1,num2); //calling function
	

	cout<<"Sum is: "<<add<<endl;
	
	return 0;
}


int addition(int a,int b) //function definition
{
	return (a+b);
}
