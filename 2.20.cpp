// 2.20::
//Find diameter, circumference and area from radius and print it.


#include<iostream>
using namespace std;
int main()
{
	const float pi=3.14159;
	int radius,diameter,circle,area;
	cout<<"enter the radius of the circle";
	cin>>radius;
	diameter=radius*2;
	circle=2*pi*radius;
	area=4*pi*radius*radius;
	cout<<"radius "<<radius<<"\nDiameter "<<diameter<<"\nCircumference "<<circle<<"\nArea "<<area;
	return 0;
}
