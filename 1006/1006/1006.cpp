#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main(){
	int t;
	int a, b, c;
	int i=0;
	scanf("%d", &t);
	a = t / 100;
	b = (t - a * 100) / 10;
	c = t % 10;
	for (i = 0; i < a; i++)
		printf("B");
	for (i = 0; i < b; i++)
		printf("S");
	for (i = 1; i <= c; i++)
		printf("%d", i);
	return 0;
	
}