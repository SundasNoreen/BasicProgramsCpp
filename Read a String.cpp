#include <iostream>
using namespace std;

int main()
{
	//declaring string (character array)
	char string_array[100];
	
	cout<<"Enter a string: ";
	cin.getline(string_array,100);
	
	
	cout<<"Input string is: "<<string_array<<endl;
	
	return 0;
}
