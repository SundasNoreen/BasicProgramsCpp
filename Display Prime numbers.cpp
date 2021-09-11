using namespace std;
#include<iostream>
int main()
{
	int i,j,k,count;
	cout<<"Enter a number:";
	cin>>i;
	
	for(j=2;j<i;j++)
	{
		count=0;
		for(k=2;k<j;k++)
		{
			if(j%k==0)
			
			{
			count++;
			break;
		}
			
		}
		if(count==0)
		{
			cout<<k<<" ";
		}
	}
}
