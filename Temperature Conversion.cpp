using namespace std;
#include <iostream>
#include<conio.h>
int main ()
{
	float temp,res;
	int choice;
	
	cout<<"Temperature Conversion";
	cout<<"\n(1) Fahrenheit to Celsius";
	cout<<"\n(2)Celsius to Fahrenheit";
	cout<<"\nEnter your choice:";
	cin>>choice;
	
	switch (choice)
	{
		case 1:
			{
				cout<<"\nEnter temperature in Fahrenheit: ";
				cin>>temp;
				res=(temp-32)/1.8;
			}
			break;
		case 2:
			{
				cout<<"\nEnter temperature in Celcius: ";
				cin>>temp;
				res=(temp*1.8)+32;
			}
			break;
	} 
	cout<<"\nConverted Temperature= "<<res;
	getch();
	return 0;
}
