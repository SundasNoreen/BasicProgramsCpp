#include <iostream>
using namespace std;
int main()
{
	int a,b,sum;
	cout<<"Enter an integer: ";
	cin>>a;
	b=0;
	sum=0;
	if(a<b)	cout<<sum;
	else{
		do{
			sum=sum+b;
			b++;
			cout<<b;
		}while(b<a);
		cout<<sum;
	}
	return 0;
}
