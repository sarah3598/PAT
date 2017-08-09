#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<math.h>
int judge(int t){
	int i;
	int tag;
	int k = sqrt((double)t);
	for (i = 2; i <=k; i++)
	{
	if(t%i == 0){
		break;
	}
	}
	if (i > k)
		tag = 1;
	else
		tag=0;
	return tag;
}
int main(){
	int N;
	int i;
	int count = 0;
	scanf("%d", &N);
	for (i = 3; i <= N - 2; i++){
		if (judge(i) == 1 && judge(i + 2) == 1)
			count++;
	}
	printf("%d", count);

}
