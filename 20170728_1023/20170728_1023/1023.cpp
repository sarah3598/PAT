#include<iostream>
using namespace std;
int main() {
	int i;
	int a[10];
	int b[52];//������ȫ��������洢��ֱ�����a�����±꼴��
	for (i = 0; i < 10; i++) {
		cin>>a[i];//cin��������������пո�
	}
	int l = a[0];//�ر�ע������Ҫ��¼0�ĸ���
	int j=0;
	int count = 0;
	for (i = 0; i <= 9; i++) {
		if (a[i] != 0) {
			while (a[i]--) {
				b[j++] = i;
				count++;
			}
		}
	}
	//sort(b, b + count);
	for (j = 0; j < count; j++) {
		if (b[j] != 0) {
			printf("%d", b[j]);
			break;
		}	
	}
	for (i = 0; i < l; i++) {
		printf("0");
	}
	for (int t = j + 1; t < count; t++) {
		printf("%d", b[t]);
	}
	return 0;
}