#include<iostream>
using namespace std;
void change(bool arr[],int j)
{
	for(int i=0;i<100-j;i=i+j)
	{
		arr[i]=!arr[i];
	}
}
int main()
{
	bool arr[100] = { 0 };
	for(int j=1;j<=100;j++)
	{
		change(arr,j);
	}
	for(int i=1;i<=100;i++)
	{
		if(arr[i]==1)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}