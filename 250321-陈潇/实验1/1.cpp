#include<iostream>
using namespace std;
int main() 
{
	int k = 5;//原本k未声明与赋值
	int i = k + 1;
	cout << i++ << endl;
	i = 1;//int i = 1;(前面i已经声明了变量类型，这里不能重复声明）
	cout << i++ << endl;
	cout<<"Welcome to C++"<<endl;
	return 0;
}