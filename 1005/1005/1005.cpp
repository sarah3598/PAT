
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main(){
	int t[102] = { 0 };
	int cover[102] = { 0 };
	int tag;
	int n;
	int i;
	int first = 1;
	scanf("%d",&n);
	for (i = 0; i<n; i++){
		scanf("%d", &t[i]);
		tag = t[i];
		cover[tag] = 1;
	}
	for (i = 0; i<n; i++){
		tag = t[i];
		while (tag!=0&&tag != 1){
		if (tag % 2 == 0)
			tag = tag / 2;
		else
			tag = (3 * tag + 1)/2;
		if (tag <= 100){
			cover[tag] = 0;	
		}
		}
	}
	for (i = 101; i >= 0; i--){
		if (cover[i] == 1){
			if (first == 1){
				printf("%d", i);
				first = 0;
			}//是否是第一个数，第一个数输出不需要空格
			else{
				printf(" %d", i);
			}

		}
	}
	return 0;
		
	
}