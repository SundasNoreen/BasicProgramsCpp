using namespace std;
#include<iostream>
int main()
{
	int a,b,sum;
	cout<<"Enter an integer: ";
	cin>>a;
	b=0;
	sum=0;
do	
	{
	 sum=sum+b;
	 b=b++;
		
	}
	
while(b<=a);
cout<<sum;
	
}
