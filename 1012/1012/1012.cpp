/*A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。*/
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main(){
	int a1=0, a2=0, a3 = 0,a5=0;
	int N;
	float a4=0;
	int i=0;
	int k = 0,m=0;
	int t[1000];
	scanf("%d", &N);
	for (; i<N; i++){
		scanf("%d", &t[i]);
		if (t[i] % 5 == 0 && t[i] % 2 == 0)
			a1 += t[i];
		if (t[i] % 5 == 1){
			k++;
			if (k % 2 == 0)
				a2 -= t[i];
			else
				a2 += t[i];
		}
		if (t[i] % 5 == 2)
			a3++;
		if (t[i] % 5 == 3){
			a4 += t[i];
			m++;
		}
		if (t[i] % 5 == 4){
			if (t[i] > a5)
				a5 = t[i];
		}
	}
	a4 = a4 / m;
	printf("%d %d %d %.1f %d", a1, a2, a3, a4, a5);
	return 0;
}