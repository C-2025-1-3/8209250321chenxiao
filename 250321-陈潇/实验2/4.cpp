#include<iostream>
using namespace std;
int main() {
	int a, b;
	char c;
	cin >> a >> c >> b;
	if (c=='+')
		cout << a + b << endl;
	else if (c=='-')
		cout << a - b << endl;
	else if (c=='*')
		cout << a * b << endl;
	else if (c == '/')
	{
		if (b == 0)
			cout << "0不能作除数" << endl;
		else
			cout << a / b << endl;
	}
	else if (c == '%')
		cout << a % b << endl;
	else 
		cout << "运算符输入错误" << endl;
	return 0;
}