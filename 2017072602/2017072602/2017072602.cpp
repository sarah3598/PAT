/*���ֺڶ�
@author
yuanshuo*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int cmp(char a, char b) {
	return a >b;//�ǵ��������ܼ�=
}
int main() {
	string s, a, b;
	int result;
	cin >> s;
	s.insert(0, 4 - s.size(), '0');//Ҳ������s.length()
	do{
		a = s;
		b = s;
		sort(a.begin(), a.end(), cmp);
		sort(b.begin(), b.end());
		result = stoi(a) - stoi(b);
		s =to_string(result);//����ת��string����
		s.insert(0, 4 - s.size(), '0');
		cout << a << " - "<< b << " = "<< s << endl;//�ر�ע��-��=����ո�
	} while (s!="0000"&&s != "6174");
	return 0;
}