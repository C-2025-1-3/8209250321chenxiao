#include<iostream>
#include<string>
using namespace std;
int indexOf(const char *s1, const char* s2)
{
	int i, j, tf;
	i = strlen(s1);
	j = strlen(s2);
	if (i == 0)
		return 0;
	if (i > j)
		return -1;
	for (int k = 0; k <= j - i; k++)
	{
		if (s1[0] == s2[k])
		{
			tf = 1;
			for (int zj = 0; zj < i; zj++)
			{
				if (s1[zj] != s2[k + zj])
				{
					tf = 0;
				}
			}
			if (tf == 1)
				return k+1;
		}
	}
	return -1;
}
int main()
{
	int result;
	char s1[100], s2[100];
	cout << "请输入第一个字符串" << endl;
	cin >> s1;
	cout << "请输入第二个字符串" << endl;
	cin >> s2;
	result = indexOf(s1, s2);
	if (result == 0)
		cout << "第一个字符串为空字符串" << endl;
	else if (result == -1)
		cout << "第一个字符串不在第二个字符串中" << endl;
	else
		cout << "第一个字符串在第二个字符串中的位置为：" << result << endl;
}