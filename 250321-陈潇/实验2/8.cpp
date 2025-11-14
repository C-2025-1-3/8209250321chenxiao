#include<iostream>
using namespace std;
int main()
{
	float a, b,c;
	cin >> a;
	b = a;
	c = (b + a / b) / 2;
	for (; b-c>=0.00001||b-c<=-0.00001;)
	{
		b = c;
		c = (b + a / b) / 2;
		
	}
	cout << c << endl;
	return 0;
}