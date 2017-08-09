#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<math.h>
int Judge(int n){
	int i = 2;
	if (n > 2){
		for (; i <=sqrt((float)n); i++){
			if (n%i == 0){
				return 0;
				break;
			}
		}
		return 1;
	}
	if (n == 2)
		return 1;
}
int main(){
	int n, m;
	int i;
	int count = 0;
	while (scanf("%d %d", &n, &m) != EOF);
	for (i = 2;i<100000; i++){
		if (Judge(i) == 1)
			count++;
		if (count >= n&&count <= m){
			printf("%d", i);
		}

		if (count>m)
			break;
	}
	return 0;
}
