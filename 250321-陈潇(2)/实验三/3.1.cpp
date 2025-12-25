#include<iostream>
using namespace std;
void abc(int a, int b,int& c,int& d) 
{
	int i, j;
	for (i = a > b ? a : b; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0) {
			c = i;
			break;
		}
	}
	for (j = a > b ? a : b;; j++)
	{
		if (j % a == 0 && j % b == 0) {
			d = j;
			break;
		}
	}
	
}
int main() {
	int m, n,a=0,b=0;
	cin >> m >> n;
	abc(m, n, a, b);
	cout<<"这两个数的最大公因数是：" << a << endl<<"这两个数的最小公倍数是：" << b << endl;
	return 0;
}