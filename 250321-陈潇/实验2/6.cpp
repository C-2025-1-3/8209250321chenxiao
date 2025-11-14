#include<iostream>
using namespace std;
int main() {
	int a, b, i;
	cin >> a >> b;
	for (i = (a > b ? b : a); i >= 1; i--)
		if (a % i == 0 && b % i == 0)
		{
			cout << i << endl;
			break;
		}
	for (i = (a > b ? a : b); i >= 1; i++)
		if (i % a == 0 && i % b == 0)
		{
			cout << i << endl;
			break;
		}

	
	return 0;
}