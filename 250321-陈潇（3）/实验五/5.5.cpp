#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}
	void display()
	{
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
};
int main()
{
	Point p1(60, 80);
	p1.setPoint(10, 20);
	p1.display();
	return 0;
}