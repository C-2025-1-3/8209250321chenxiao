#include<iostream>
#include<string>
using namespace std;
int main() {
	int en=0, n=0, num=0, otr=0,i;
	char zhongjian;
	string str;
	
	getline(cin, str);
	for (i = 0; i < str.size(); i++){
		char zhongjian = str[i];
		if ((65 <= zhongjian && zhongjian <= 90) || (97 <= zhongjian && zhongjian <= 122))en++;
		else if (zhongjian == 32)n++;
		else if (48 <= zhongjian && zhongjian <= 57)num++;
		else otr++;
		

		
	}
	cout << en << endl << num << endl << n << endl << otr << endl;

	return 0;
}