#include <iostream>
using namespace std;


class Numbers //class definition
{
	//member function declaration
	private:
		int a;
		int b;
	public:
	
		void readNumbers(void);
		void printNumbers(void);
		int callAddition(void);
};

//member function definitions
void Numbers::readNumbers(void)
{
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;	
}

void Numbers::printNumbers(void)
{
	cout<<"a= "<<a<<",b= "<<b<<endl;
}

int Numbers::callAddition(void)
{
	return (a+b);
}


int main() //main function
{
	
	Numbers num; // object declaration
	int add; //variable to store addition
	//take input
	num.readNumbers();
	//find addition
	add=num.callAddition();
	
	//print numbers
	num.printNumbers();
	//print addition
	cout<<"Sum= "<<add<<endl;
	

return 0;
}
