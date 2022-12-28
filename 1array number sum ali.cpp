#include<iostream>
using namespace std;
int main()
{
	int a[10],i,su=0;
	for(i=0;i<10;i++)
	{
		cout<<"enter the numbers:";
		cin>>a[i];
		
	}
	
		for(i=0;i<10;i++)
	{
		if(i==3)
		 continue;
		 if(i==5)
		 continue;
		su=su+a[i];
		
	}
	cout<<"sum of numbers=:"<<su;
}
	