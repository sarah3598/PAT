#include<iostream>
#include<string>
using namespace std;
int main() {
	string a;
	int b;
	cin >> a;
	cin >> b;
	int q=0, r=0;
	int i;
	int len = a.length();
	q = (a[0] - '0')/b;//除数
	r = (a[0] - '0') % b;//余数
	if (len == 1||(len>1&&q!=0))//注意考虑到a只有一位时直接输出q,当除数不为0时输出结果第一位
		cout << q;
	for (i = 1; i < len; i++) {
		q= (r * 10 + (a[i] - '0'))/b;
		r = (r * 10 + (a[i] - '0')) % b;//这里注意先求除数再求余数
		cout << q;
	}
	cout <<" "<<r << endl;
	return 0;
}