#include<iostream>
#include<string>
using namespace std;
int main() {
	//string s;
	int s[1000] = { 0 };//千万记住初始化
	int a, b;
	int d;
	cin >> a >> b>>d;
	int i;
	int sum;
	sum = a + b;
	for (i = 0;sum>=d; i++) {
		s[i] =sum%d;
		sum /= d;
	}//注意for结束条件，最后一位是除数
	s[i] = sum;
	for (int j=i; j>= 0; j--) {
		cout << s[j];
	}
	return 0;
}