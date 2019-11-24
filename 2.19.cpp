// 2.19::
//Write a program that input three intgers from key board and prints sum,avg,product,smallest and larger number.


#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum,avg,mul,smallest,largest;
	cout<<"enter a numbers";
	cin>>a;
	cout<<"enter a numbers";
	cin>>b;
	cout<<"enter a numbers";
	cin>>c;
	sum=a+b+c;
	avg=sum/3;
	mul=a*b*c;
	cout<<"Input three different integers :"<<a<<","<<b<<","<<c<<endl;
	cout<<"Sum is "<<sum<<"\n";
	cout<<"Average is "<<avg<<"\n";
	cout<<"Product is "<<mul<<"\n";
	//smallest//
	if(a<b)
	{
		if(a<c){
			cout<<a<<" is smallest"<<"\n";
		}
		else{
			cout<<c<<" is smallest"<<"\n";
		}
	}
	else if(b<a)
	{
		if(b<c){
		cout<<b<<" is smallest"<<"\n";
		}
		else{
			cout<<c<<" is smallest"<<"\n";
		}
	}
	//largest//
	if(a>b)
	{
		if(a>c){
			cout<<a<<" is larger"<<"\n";
		}
		else{
			cout<<c<<" is larger"<<"\n";
		}
	}
	else if(b>a)
	{
		if(b>c){
		cout<<b<<" is larger"<<"\n";
		}
		else{
			cout<<c<<" is larger"<<"\n";
		}
	}
	return 0;
}
