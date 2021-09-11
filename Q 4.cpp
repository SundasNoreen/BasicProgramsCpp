using namespace std;
#include<iostream>
int main()
{
	int a,b=0;
cout<<"Enter a number:";
cin>>a;
while(a>0)
 {
 	a=a/10;
 	b++;
 }
cout<<b;
	
}
