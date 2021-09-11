using namespace std;
#include<iostream>
int main()
{
	int i,j;
	bool isprime=true;
	cout<<"Enter a positive integer:";
	cin>>i;
	
	for(j=2;j<=i/2;++j)
	{
		if(i%j==0)
		{
		isprime=false;
		break;
		}
	}
	
	if(isprime)
	cout<<"It is a prime number.";
	else
	cout<<"It is not a prime number.";
	
}
