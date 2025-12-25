#include<iostream>
using namespace std;
int taozi(int n)
{
	int a;
	if (n == 1)
		a = 1;
	else
		a = 2 * taozi(n - 1) + 1;
	return a;
		
}
int main()
{
	int n = 10;
	cout << taozi(n) << endl;
	return 0;
}