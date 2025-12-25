#include<iostream>
using namespace std;
bool ispirme(int num);
int main()
{
	for (int i = 2,k=0; k< 200;)
	{
		for (int j = 0; j < 10;)
		{
			if (ispirme(i)==1)
			{
				cout << i << "\t";
				j++;
				k++;
			}
			i++;
		}
		cout << endl;

	}
	return 0;
}
bool ispirme(int num) 
{
	int i,j=1;
	for (i = num - 1; i > 1; i--)
	{
		if (num % i == 0)
		{
			j = 0;
			break;
		}
	}
	return j;
}