#include<iostream>
using namespace std;
int main() {
	int i;
	int a[10];
	int b[52];//此题完全不用数组存储，直接输出a数组下标即可
	for (i = 0; i < 10; i++) {
		cin>>a[i];//cin本身输入各数间有空格
	}
	int l = a[0];//特别注意这里要记录0的个数
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