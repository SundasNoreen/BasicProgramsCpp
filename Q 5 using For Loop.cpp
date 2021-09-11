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
	for(j=1;j<=i;j++)
{

		fact=fact*j;
	cout<<j<<"X";
}
		cout<<"\n"<<"\nFactorial is"<<fact;
	
cout<<"\n Do you want to continue: ";
cin>>ch;
}
while(ch=='y');
}

