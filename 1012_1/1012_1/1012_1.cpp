/*A1 = �ܱ�5����������������ż���ĺͣ�
A2 = ����5������1�����ְ�����˳����н�����ͣ�������n1-n2+n3-n4...��
A3 = ��5������2�����ֵĸ�����
A4 = ��5������3�����ֵ�ƽ��������ȷ��С�����1λ��
A5 = ��5������4��������������֡�*/
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int t[1000];
int main(){
	int N;
	int i;
	void A1(int n);
	void A2(int n);
	void A3(int n);
	void A4(int n);
	void A5(int n);
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &t[i]);
		A1(N);
		A2(N);
		A3(N);
		A4(N);
		A5(N);
}
void A1(int n){
	int i = 0;
	int sum=0;
	int k = 0;
	for (; i < n; i++){
		if (t[i] % 5 == 0 && t[i] % 2 == 0){
			k++;
			sum += t[i];
		}

	}
	if (k != 0)
		printf("%d", sum);
	else
		printf("N");

}
void A2(int n){
	int i = 0;
	int k = 0;
	int sum = 0;
	for (; i < n; i++){
		if (t[i] % 5 == 1){
			k++;
			if (k % 2 == 0)
				sum -= t[i];
			else
				sum += t[i];
		}
	}
	if (k != 0)
		printf(" %d", sum);
	else
		printf(" N");
}
void A3(int n){
	int i = 0;
	int count = 0;
	for (; i < n; i++){
		if (t[i] % 5 == 2)
			count++;
	}
	if (count != 0)
		printf(" %d", count);
	else
		printf(" N");
}
void A4(int n){
	int i = 0;
	int sum = 0;
	float average=0;
	int k = 0;
	for (; i < n; i++){
		if (t[i] % 5 == 3){
			sum += t[i];
			k++;
		}
	}
	
	if (k != 0){
		average = (float)sum / k;
		printf(" %.1f",average);
	}	
	else
		printf(" N");

}

void A5(int n){
	int i;
	int max = 0;
	int k = 0;
	for (i = 0; i < n; i++){
		if (t[i] % 5 == 4){
			k++;
			if (t[i]>max)
				max = t[i];
		}
			
	}
	if (k != 0)
		printf(" %d", max);
	else
		printf(" N");

}