// 2.25:: 
//Write program for finding factor.


#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter first value: ";
	cin>>a;
	cout<<"Enter second value: ";
	cin>>b;
	if(a%b==0)
	{
		cout<<"First number is modulus of second number";
	}
	else
	{
		cout<<"First number is not modulus of second number";
	}
	return 0;
}
