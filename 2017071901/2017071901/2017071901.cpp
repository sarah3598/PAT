#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(char a, char b) {
	return a > b;//降序排序,sort()默认升序
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
		result = stoi(ss)- stoi(sj);//将字符转换成数字
		s = to_string(result);
		s.insert(0, 4 - s.size(), '0');
		cout <<ss << " - " << sj << " = " << s<< endl;//注意-和=两侧空格
	} while (s != "6174"&&s!="0000");
	return 0;
}