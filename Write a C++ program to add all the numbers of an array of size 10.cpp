#include<iostream>
using namespace std;
int main()
{
	int x[10],y=0;
	cout<<"Enter the element of array:";
	for(int i=0;i<10;i++)
	{
		cin>>x[i];
	}
	for(int i=0;i<10;i++)
	{
		y=y+x[i];
	}
	cout<<"Sum of array is:"<<y;
	
}