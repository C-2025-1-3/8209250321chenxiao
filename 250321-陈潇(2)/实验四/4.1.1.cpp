#include<iostream>
using namespace std;
int main() {
	int arr[10],news[10],k=1,bools;
	cout << "请输入十个数" << endl;
	for(int i=0;i<10;i++) 
	{
			cin >> arr[i];
	}
	news[0] = arr[0];
	for (int i = 1; i < 10;i++)
	{
		bools = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
				bools = 0;
		}
		if (bools == 1)
		{
			news[k] = arr[i];
			k++;
		}
	}
	for(int i=0;i<k;i++)
		cout << news[i] << " ";
	return 0;


}