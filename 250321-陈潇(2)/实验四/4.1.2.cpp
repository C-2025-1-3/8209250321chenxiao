#include<iostream>
using namespace std;
void maopao(double arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				double temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	double arr[10];
	int n = 10;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>arr[i];
	}
	maopao(arr, n);
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ": ";
		cout << arr[i]<<endl;
	}
	return 0;
}