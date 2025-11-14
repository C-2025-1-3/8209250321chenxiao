#include<iostream>
using namespace std;
int main()
{
	const float ¦° = 3.14;
	float r, h;
	cout << "ÇëÊäÈëÔ²×¶µÄ°ë¾¶" << endl;
	cin >> r;
	cout << "ÇëÊäÈëÔ²×¶µÄ¸ß" << endl;
	cin >> h;
	float V =  (¦° * r * r * h)/3;
	cout << "V=" << V << endl;
	return 0;
}
