using namespace std;
#include<iostream>
int main()
{
	int a,b,c,d;
	cout<<"Enter number of which HCF is to be determined:";
	cin>>a>>b;
	for(c=1;c<=a&&c<=b;c++)
	{
		if(a%c==0&&b%c==0)
	    d=c;
	}
		cout<<"HCF is  "<<d;
}
