#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declaring string (character array) One Way
	char string_array[100];
	cout<<"Enter first string: ";
	cin.getline(string_array,100);
	cout<<"First input string is: "<<string_array<<endl;
	
	// Declaring String Datatype itself by including string in the header // Seconf Way
	string a;
	cout<<"Enter second string: ";
	cin>>a;
	cout<<"Second input string is: "<<a<<endl;
	
	return 0;
}
