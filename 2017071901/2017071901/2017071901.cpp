#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(char a, char b) {
	return a > b;//��������,sort()Ĭ������
}
int main() {
	string s;
	cin >> s;
	s.insert(0, 4 - s.length(), '0');
	do {
		string ss = s, sj = s;
		int result;
		sort(ss.begin(), ss.end(), cmp);
		sort(sj.begin(), sj.end());
		result = stoi(ss)- stoi(sj);//���ַ�ת��������
		s = to_string(result);
		s.insert(0, 4 - s.size(), '0');
		cout <<ss << " - " << sj << " = " << s<< endl;//ע��-��=����ո�
	} while (s != "6174"&&s!="0000");
	return 0;
}