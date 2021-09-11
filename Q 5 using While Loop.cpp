using namespace std;
#include<iostream>
int main()
{
int i,j,fact;
char ch;
do
{
    cout<<"Enter number whose factorial is to be determined: ";
	cin>>i;
	fact=1;
	j=1;
	while(j<=i)
{
fact=fact*j; 
	cout<<j<<" X ";
	j++;
}
		cout<<"\n"<<"\nFactorial is "<<fact;
	
cout<<"\n"<<"\n Do you want to continue: ";
cin>>ch;
}
while(ch=='y');
}

