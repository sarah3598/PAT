#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main(){
	int n, m;
	int temp;
	int i;
	int a[100];
	int first = 1;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++){	
		scanf("%d", &a[i]);
		}
	while (m--){
		temp = a[n - 1];
		for (i = n - 1; i>0; i--){
			a[i] = a[i - 1];
		}
		a[0] = temp;
	}
	for (i = 0; i < n; i++){
		if (first){
			printf("%d", a[i]);
			first = 0;
		}
		else
		{
			printf(" %d", a[i]);
		}	
		
	}
	return 0;
}