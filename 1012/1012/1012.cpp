/*A1 = �ܱ�5����������������ż���ĺͣ�
A2 = ����5������1�����ְ�����˳����н�����ͣ�������n1-n2+n3-n4...��
A3 = ��5������2�����ֵĸ�����
A4 = ��5������3�����ֵ�ƽ��������ȷ��С�����1λ��
A5 = ��5������4��������������֡�*/
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