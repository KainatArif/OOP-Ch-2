// 2.16:: 
//Write a program that asks the user to enter two numbers, obtain the two numbers from user and print the sum, product, difference and qoutient of the two numbers.

#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,mul,div,sub;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	sum=a+b;
	mul=a*b;
	sub=a-b;
	div=a/b;
	cout<<"Sum of a and b= "<<sum<<"\n";
	cout<<"Product of a and b= "<<mul<<"\n";
	cout<<"Division of a and b= "<<div<<"\n";
	cout<<"Subtraction of a and b= "<<sub<<"\n";
}
