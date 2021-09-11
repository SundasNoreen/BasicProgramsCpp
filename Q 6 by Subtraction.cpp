using namespace std;
#include<iostream>
int main()
{
	int a,b;
	cout<<"Enter 2 numbers:";
	cin>>a>>b;
	while(a!=b)
{
	if(a>b)
	a -=b;
	else
	b -=a;
	
}
cout<<a;
}
