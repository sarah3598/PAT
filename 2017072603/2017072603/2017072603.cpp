#include<iostream>
using namespace std;
int main() {
	char a[1002];//string s;int len=s.length();s[i]即可表示a[i]
	int b[10];
	cin >> a;
	int i;
	for (i = 0; i < 10; i++)
		b[i] = 0;
	//初始化 int b[10]={0};
	for (i = 0; a[i] != '\0'; i++) {
		int	t=a[i] - '0';//字符变成整型
		b[t]++;
	}
	for (i = 0; i < 10; i++) {
		if (b[i] != 0) {
			cout << i << ':' << b[i] << endl;
		}
	}
	return 0;
}