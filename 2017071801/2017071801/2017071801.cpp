#include<iostream>
#include<string>
using namespace std;
/*���ؼ׷���ʤ�������1Ϊʤ��0Ϊ����2Ϊƽ
���������ʤ
ͳ�Ƶı���̫�������һ���������洢*/
int cmp(char a, char b) {
	if ((a =='C'&&b =='J')||(a=='J'&&b=='B')||(a=='B'&&b=='C'))
		return 1;
	if (a == b)
		return 2;
	else
		return 0;
}
int main() {
	int n=0;
	char a, b;
	int count_s = 0,count_p=0,count_f=0;//�׷�ʤ�Ĵ���,ƽ�ִ���,�����
	int count_c = 0, count_j = 0, count_b = 0;
	int count_c0 = 0, count_j0 = 0, count_b0 = 0;
	char A, B;//��¼ʤ���������
	int count_temp;
	cin>>n;
	while (n--) {
		cin >> a >> b;
		if (cmp(a, b) == 1) {
			count_s++;
			if (a == 'C') count_c++;
			if (a == 'J') count_j++;
			if (a == 'B') count_b++;
		}
		if (cmp(a, b) == 2) {
			count_p++;
		}
		if (cmp(a, b) == 0) {
			count_f++;
			if (b == 'C') count_c0++;
			if (b == 'J') count_j0++;
			if (b == 'B') count_b0++;
		}
	}
	A = count_c >= count_j ? 'C' : 'J';
	count_temp = count_c >= count_j ? count_c : count_j;
	if (count_b >= count_temp) {
		A = 'B';
	}
	B = count_c0 >= count_j ? 'C' : 'J';//�������ȡ����С����ĸ
	count_temp = count_c0 >= count_j0 ? count_c0 : count_j0;
	if (count_b0 >= count_temp) {
		B = 'B';
	}
	cout << count_s <<" "<< count_p <<" "<< count_f << endl;
	cout << count_f <<" "<< count_p <<" "<< count_s << endl;
	cout << A << " " <<B<< endl;
	return 0;
}