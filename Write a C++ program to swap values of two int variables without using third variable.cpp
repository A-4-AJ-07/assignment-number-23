#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the two numbers:";
	cin>>x>>y;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"Numbers after swaping:"<<x<<endl<<y;
}