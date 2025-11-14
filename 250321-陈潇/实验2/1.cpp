#include<iostream>
using namespace std;
int main() 
{
	char a;
	cin >> a;
	
	if (97 <= a && a <= 122)
	{
		a -= 32;
		cout << a << endl;
	}
	else cout << int(a + 1) << endl;

	
	return 0;
}