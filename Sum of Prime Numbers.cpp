#include<iostream>
using namespace std;

int main() 
{

    int a, b, c, d, sum = 0;

    cout << "Enter a number :";
    cin>>a;

    for (b = 2;b < a; b++) 
	{
        c = 1;
        d = 2;
        while (d < b) 
		{
            if (b % d == 0) 
			{
                c = 0;
                break;
            }
            d++;
        }
        if (c == 1) 
		{
            sum = sum + d;
        }
    }
    cout << "\nThe sum of Prime Number is :" << sum;

    return 0;
}

