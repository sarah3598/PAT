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
	q = (a[0] - '0')/b;//����
	r = (a[0] - '0') % b;//����
	if (len == 1||(len>1&&q!=0))//ע�⿼�ǵ�aֻ��һλʱֱ�����q,��������Ϊ0ʱ��������һλ
		cout << q;
	for (i = 1; i < len; i++) {
		q= (r * 10 + (a[i] - '0'))/b;
		r = (r * 10 + (a[i] - '0')) % b;//����ע�����������������
		cout << q;
	}
	cout <<" "<<r << endl;
	return 0;
}