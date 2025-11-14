#include<iostream>
using namespace std;
int main(){
	int i,ii=1,nn=0,n;
	for (i = 1; nn<= 100; i++) 
	{
		n = 1;
		for (ii = 1; ii <= i; ii++)
		{
			n=2*n;

		}
		nn += n;
		
	}
	cout << nn * 0.8/i;
	return 0;
}