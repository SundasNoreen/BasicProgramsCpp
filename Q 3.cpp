using namespace std;
#include<iostream>
int main()
{
	int a,b;
	cout<<"Enter the number upto which even numbers are to be printed: ";
	cin>>a;
	
	for(b=2;b<=a;b++)
	if(b%2==0)
	cout<<"\n"<<b;
}
