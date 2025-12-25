#include<iostream>
#include<string>
#include<cmath>
using namespace std;
const int ascii_a = 97;
const int ascii_f = 102;
const int ascii_A = 65;
const int ascii_F = 70;
const int ascii_0 = 48;
const int ascii_9 = 57;
int parseHex(const char* const hexString)
{
	int strlength = strlen(hexString),result=0;
	for (int i =0; i < strlength; i++)
	{
		if(97<= hexString[i]&& hexString[ i]<=102)
			result += pow(16, strlength - i-1) * (hexString[ i] - 87);
		if (65 <= hexString[i] && hexString[i] <= 70)
			result += pow(16, strlength - i-1) * (hexString[ i] - 55);
		//if (48 <= hexString[i] && hexString[i] <= 57)
			//result += pow(16,  strlength - i-1) * (hexString[i] - 48);
		//疑似char（1~9）会自动转换为int（1~9）
		if (48 <= hexString[i] && hexString[i] <= 57)
			result += pow(16, strlength - i-1) * (hexString[i]-48);
	}
	return result;
}
int main()
{
	char str[100];
	int num;
	cout << "输入一个十六进制数" << endl;
	cin >> str;
	num=parseHex(str);
	cout << "转换后的十进制数为：" << num << endl;
	return 0;
}