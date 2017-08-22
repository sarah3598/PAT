/*数字黑洞
@author
yuanshuo*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int cmp(char a, char b) {
	return a >b;//非递增排序不能加=
}
int main() {
	string s, a, b;
	int result;
	cin >> s;
	s.insert(0, 4 - s.size(), '0');//也可以用s.length()
	do{
		a = s;
		b = s;
		sort(a.begin(), a.end(), cmp);
		sort(b.begin(), b.end());
		result = stoi(a) - stoi(b);
		s =to_string(result);//整型转成string类型
		s.insert(0, 4 - s.size(), '0');
		cout << a << " - "<< b << " = "<< s << endl;//特别注意-和=两侧空格
	} while (s!="0000"&&s != "6174");
	return 0;
}