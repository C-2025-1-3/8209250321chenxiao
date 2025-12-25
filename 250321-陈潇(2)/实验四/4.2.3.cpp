#include<iostream>
using namespace std;
void bobble(int* arr,int length)
{
	int i, j, temp;
	for (i = 0; i < length - 1; i++)
	{
		for (j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void bobble(float* arr, int length)
{
	int i, j;
	float temp;
	for (i = 0; i < length - 1; i++)
	{
		for (j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int choice, length;
	int* intArr = nullptr;
	float* floatArr = nullptr;
	cout << "选择数组类型:"<<endl << "  1.整型数组" <<endl<<"  2.浮点数数组" << endl;
	cin >> choice;
	cout << "输入数组长度:" << endl;
	cin >> length;
	switch (choice)
	{
	case 1:
	{
		int* arr = new int[length];
		cout << "请输入数组元素:" << endl;
		for (int i = 0; i < length; i++)
			cin >> arr[i];
		bobble(arr, length);
		cout << "排序后的数组元素为:" << endl;
		for (int i = 0; i < length; i++)
			cout << *(arr + i) << "  ";
		delete[] arr;
		break;
	}
	case 2:
	{
		float* arr = new float[length];
		cout << "请输入数组元素:" << endl;
		for (int i = 0; i < length; i++)
			cin >> arr[i];
		bobble(arr, length);
		cout << "排序后的数组元素为:" << endl;
		for (int i = 0; i < length; i++)
			cout << *(arr + i) << "  ";
		delete[] arr;
		break;
	}
	default:
		cout << "无效选择!" << endl;
		break;
	}
	return 0;

}