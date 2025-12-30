#include<iostream>
using namespace std;
class Cuboid
{
private:
	int length;
	int breadth;
	int height;
public:
	void setACuboid()
	{
			cout << "Enter length, breadth and height of the cuboid: "<<endl;
			cin >> length >> breadth >> height;
	}
	void showACuboid()
	{
			cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
	}
	int volume()
	{
			return length * breadth * height;
	}
};
int main()
{
	Cuboid c1, c2, c3;
	c1.setACuboid();
	c2.setACuboid();
	c3.setACuboid();
	cout<<c1.volume()<<"  " << c2.volume() <<"  " << c3.volume();
}