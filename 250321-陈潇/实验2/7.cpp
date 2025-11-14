#include<iostream>
using namespace std;
int main()
{
	int i,n;
	for(i=1;i<=5;i++)
	{
		n = 0;
		while (n < i)
		{
			cout << "*";
			n++;
		}
		cout << endl;

	}

		
	return 0;
}