#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
	float n,m;
	cout << "请输入华氏温度" << endl;
	cin >> n;
	m = (n - 32) / 1.8;

	cout << "转化后的摄氏温度为：" <<fixed<<setprecision(2)<< m << endl;

}