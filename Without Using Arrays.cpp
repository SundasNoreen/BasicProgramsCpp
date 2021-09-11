using namespace std;
#include<iostream>
int main()
{
	int a,b,c,d,e,max,min;								//Declaring Variables.
	
	cout<<"\nEnter Marks in I to C (MAX 100):";			//Taking Marks of 1st Subject.
	cin>>a;
 		if((a>100)||(a<0))
		cout<<"\nInvalid Data.";
	
	cout<<"\nEnter Marks in Calculus (MAX 100):";			//Taking Marks of 2nd Subject.
	cin>>b;
		if((a>100)||(a<0))
	    cout<<"\nInvalid Data.";
	
	cout<<"\nEnter Marks in MWM (MAX 100):";				//Taking Marks of 3rd Subject.
	cin>>c;
		if((a>100)||(a<0))
		cout<<"\nInvalid Data.";
	
	cout<<"\nEnter Marks in Islamic Studies (MAX 100):";	//Taking Marks of 4th Subject.
	cin>>d;
		if((a>100)||(a<0))
		cout<<"\nInvalid Data.";
	
	cout<<"\nEnter Marks in Pakistan Studies (MAX 100):";    //Taking Marks of 5th Subject.
	cin>>e;
		if((a>100)||(a<0))
		cout<<"\nInvalid Data.";
	
	cout<<"\n*************************************************************************"<<endl;
	
	cout<<"\n"<<"\t"<<"Your Result Statistics."<<endl;
	
	cout<<"\nMarks obtained in I to C are: "<<a;
	cout<<"\nMarks obtained in Calculus are: "<<b;
	cout<<"\nMarks obtained in MWM are: "<<c;
	cout<<"\nMarks obtained in Islamic Studies are: "<<d;
	cout<<"\nMarks obtained in Pakistan Studies are: "<<e<<endl;
	
	cout<<"\nYour Obtained Marks out of 400 are: "<<a+b+c+d+e<<endl;
	
	cout<<"\nYour Average is: "<<(a+b+c+d+e)/5<<endl;
	
	//Checking Maximum and Minimum Marks.
	if((a>=b)&&(a>=c)&&(a>=d)&&(a>=e))
   	{
	max=a;
   	cout<<"\nYou have secured maximum marks in I to C.";
	}

    if((b>=a)&&(b>=c)&&(b>=d)&&(b>=e))
	{
	max=b;
   	cout<<"\nYou have secured maximum marks in Calculus.";
    }

	if((c>=a)&&(c>=b)&&(c>=d)&&(c>=e))
	{
	max=c;
   	cout<<"\nYou have secured maximum marks in MWM.";
	}

    if((d>=a)&&(d>=c)&&(d>=b)&&(d>=e))
	{
	max=d;
   	cout<<"\nYou have secured maximum marks in Islamic Studies.";
	}

    if((e>=a)&&(e>=c)&&(e>=b)&&(e>=d))	
	{
	max=e;
	cout<<"\nYou have got maximum marks in Pakistan Studies."<<endl;
    }

	cout<<"\nYour Maximum marks are: "<<max<<endl;
	
  

    if((a<=b)&&(a<=c)&&(a<=d)&&(a<=e))
   	{
	min=a;
   	cout<<"\nYou have secured minimum marks in I to C.";
	}

	if((b<=a)&&(b<=c)&&(b<=d)&&(b<=e))
	{
	min=b;
   	cout<<"\nYou have secured minimum marks in Calculus.";
	}

	if((c<=a)&&(c<=b)&&(c<=d)&&(c<=e))
	{
	min=c;
   	cout<<"\nYou have secured minimum marks in MWM.";
	 }

    if((d<=a)&&(d<=c)&&(d<=b)&&(d<=e))
	{
	min=d;
   	cout<<"\nYou have secured minimum marks in Islamic Studies.";
    }
     
	 if((e<=a)&&(e<=c)&&(e<=b)&&(e<=d))
	{
	min=e;
	cout<<"\nYou have got minimum marks in Pakistan Studies."<<endl;
	}
	
	cout<<"\nMinimum marks are: "<<min;
	
	
			
}
