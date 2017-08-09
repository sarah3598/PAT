#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int judge(long a, long b, long c){
	if (a + b > c)
		return 1;
	else
		return 0;
}
int main(){
	int n;
	int i=0;
	int j = 0;
	long a, b, c;
	int p[10];
	scanf("%d", &n);
	while (n--){
		scanf("%ld %ld %ld", &a, &b, &c);
		if (judge(a, b, c))
			p[j++] = 1;		
		else
			p[j++] = 0;		
	}
	for (i = 0; i < j; i++){
		if (p[i]==1)
			printf("Case #%d: true\n", i+1);
		if (p[i]==0)
			printf("Case #%d: false\n", i+1);
	}
	return 0;
}