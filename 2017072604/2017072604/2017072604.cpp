#include<iostream>
#include<string>
using namespace std;
int main() {
	//string s;
	int s[1000] = { 0 };//ǧ���ס��ʼ��
	int a, b;
	int d;
	cin >> a >> b>>d;
	int i;
	int sum;
	sum = a + b;
	for (i = 0;sum>=d; i++) {
		s[i] =sum%d;
		sum /= d;
	}//ע��for�������������һλ�ǳ���
	s[i] = sum;
	for (int j=i; j>= 0; j--) {
		cout << s[j];
	}
	return 0;
}