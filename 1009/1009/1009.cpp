#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<string.h>
int main(){
	int i=0, j;
	int k = 1;
	char a[85];
	int p[40];
	int first = 1;
	p[0] = 0;
	while ((a[i++] = getchar()) != '\n');
		i--;
	a[i] = '\0';
	for (j = 0; j <i; j++){
		if (a[j] == ' '){
			a[j] = '\0';
			p[k++] = j+1;
		}		
	} 
	for (i = k - 1; i >= 0; i--){
		if (first){
			printf("%s", &a[p[i]]);
			first = 0;
		}
		else{
			printf(" %s", &a[p[i]]);
		}
	}
	return 0;
}