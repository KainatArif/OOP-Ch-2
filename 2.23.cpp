// 2.23
//Find largest and smallest number from five integers.


#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,smallest,largest;
	cout<<"enter five numbers";
	cin>>a>>b>>c>>d>>e;
	smallest=a;
	largest=a;
	
	//Largerst
	
	if(a>largest)
	{
		largest=a;
	}
	if(b>largest)
	{
		largest=b;
	}if(c>largest)
	{
		largest=c;
	}if(d>largest)
	{
		largest=d;
	}if(e>largest)
	{
		largest=e;
	}
	
	//Smallest
	if(a<smallest)
	{
		smallest=a;
	}
	if(b<smallest)
	{
		smallest=b;
	}if(c<smallest)
	{
		smallest=c;
	}if(d<smallest)
	{
		smallest=d;
	}if(e<smallest)
	{
		smallest=e;
	}
	cout<<"Smallest No is "<<smallest<<"\nLargest No is "<<largest;
	return 0;
}
