#include<iostream>
using namespace std;
void merge(int list1[],int i, int list2[],int j, int list3[])//组合数列函数
{
	for (int q = 0; q < i + j; q++)
	{
		if (q < i)
			list3[q] = list1[q];
		else
			list3[q] = list2[q - i];
	}
}
void paixv(int list3[80],int i,int j)//冒泡排序函数
{
	int zj;
	for (int m = 0; m < i + j; m++)
	{
		for (int n = 0; n < i + j - m - 1; n++)
			if (list3[n + 1] < list3[n])
			{
				zj = list3[n];
				list3[n] = list3[n + 1];
				list3[n + 1] = zj;
			}

	}
}
int main()
{
	int arr1[40], arr2[40], arr3[80];
	int i = 0, j = 0, k = 0;
	cout << "enter list1(-1 to end):" << endl;
	for (i = 0; i < 40; i++)
	{
		cin >> arr1[i];
		if (arr1[i] == -1)
			break;
	}
	cout << "enter list2(-1 to end):" << endl;
	for (j = 0; j < 40; j++)
	{
		cin >> arr2[j];
		if (arr2[j] == -1)
			break;
	}
	merge(arr1, i, arr2, j, arr3);
	paixv(arr3, i, j);
	for (int q = 0; q < i + j; q++)
	{
		cout << arr3[q] << " ";
	}
	return 0;
}