using namespace std;
#include <iostream>
#include <string>
int main()
{
	int marks[5],k,sum,avg,max,min;
	
	cout<<"Enter marks of, one on each line of English,Urdu,Maths,Physics,Islamiat respectively:\n";
	for(k=0;k<5;k++)
	cin>>marks[k];
	cout<<"\nMarks in English (max 100): "<<marks[0];
	cout<<"\nMarks in Urdu (max 100): "<<marks[1];
	cout<<"\nMarks in Maths (max 100): "<<marks[2];
	cout<<"\nMarks in Physics (max 100): "<<marks[3];
	cout<<"\nMarks in Islamiat (max 50): "<<marks[4];
	sum=0;
	for(k=0;k<5;k++)
	sum=sum+marks[k];
	cout<<"\nYour Obtained Marks out of 450 are: "<<sum<<endl;
	avg=sum/5;
	cout<<"\nAverage is: "<<avg<<endl;
	max=marks[0];
	for(k=1;k<5;k++)
		{
		if(marks[k]>max)
			max=marks[k];
	}
	
	if(max==marks[0])
	{
		cout<<"\nYou secured maximum marks in English.";
	}
	
		if(max==marks[1])
	{
		cout<<"\nYou secured maximum marks in Urdu.";
	}
	
		if(max==marks[2])
	{
		cout<<"\nYou secured maximum marks in Maths.";
	}
		if(max==marks[3])
	{
		cout<<"\nYou secured maximum marks in Physics.";
	}
	if(max==marks[4])
	{
		cout<<"\nYou secured maximum marks in Islamiat.";
	}
	cout<<"\nMaximum Marks you secured are: "<<max<<endl;


	min=marks[0];
	for(k=1;k<5;k++)
		if(marks[k]<min)
		min=marks[k];

if(min==marks[0])
	{
		cout<<"\nYou secured minimum marks in English.";
	}
	
		if(min==marks[1])
	{
		cout<<"\nYou secured minimum marks in Urdu.";
	}
	
		if(min==marks[2])
	{
		cout<<"\nYou secured minimum marks in Maths.";
	}
		if(min==marks[3])
	{
		cout<<"\nYou secured minimum marks in Physics.";
	}
	if(min==marks[4])
	{
		cout<<"\nYou secured minimum marks in Islamiat.";		
}
		cout<<"\nMinimum Marks you secured are: "<<min;
		
			
}
