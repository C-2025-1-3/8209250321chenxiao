#include<iostream>
#include<string>
using namespace std;
const int ascii_A = 65;
const int ascii_a = 97;
void count(const char s[], int counts[])
{
	int strlength = strlen(s);
	for(int i=0;i<26;i++)
		for (int j = 0; j < strlength; j++)
		{
			if(ascii_a+i==s[j]||ascii_A+i==s[j])
				counts[i]++;
		}		
}
int main()
{
	char str[100];
	int counts[26] = { 0 };
	cout << "Enter a string:" << endl;
	cin >> str;
	count(str, counts);
	for(int i=0;i<26;i++)
		if(counts[i]!=0)
			cout << (char)(ascii_a + i) << " or " << (char)(ascii_A + i) << " : " << counts[i] << endl;
	return 0;
}