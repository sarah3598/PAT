#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include<string.h>
int main(){
	struct student{
		char name[15];
		char num[15];
		int score;
	}ST;
	char name_max[15];
	char name_min[15];
	char num_max[15];
	char num_min[15];
	int score_max=-1;
	int score_min = 105;
	int n;
	scanf("%d", &n);
	while (n > 0){
		scanf("%s %s %d", ST.name, ST.num, &ST.score);
		
		if (ST.score > score_max){
			score_max = ST.score;
				memcpy(name_max,ST.name,sizeof(ST.name));
				memcpy(num_max, ST.num, sizeof(ST.num));
		}
		if (ST.score < score_min){
			score_min = ST.score;
			memcpy(name_min, ST.name, sizeof(ST.name));
			memcpy(num_min, ST.num, sizeof(ST.num));
		}
		n--;
	}
	printf("%s %s\n", name_max, num_max);
	printf("%s %s\n", name_min, num_min);
	return 0;
}