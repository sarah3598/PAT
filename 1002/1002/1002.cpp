#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
void print(int a){
	switch (a){
	case 0:
		printf("ling");
		break;
	case 1:
		printf("yi");
		break;
	case 2:
		printf("er");
		break;
	case 3:
		printf("san");
		break;
	case 4:
		printf("si");
		break;
	case 5:
		printf("wu");
		break;
	case 6:
		printf("liu");
		break;
	case 7:
		printf("qi");
		break;
	case 8:
		printf("ba");
		break;
	case 9:
		printf("jiu");
		break;
	default:
		break;

	}
}

int main(){
	char n[100];
	int sum=0;
	int t;
	int i=0, j=0, k=0;
	scanf("%s", n);
	for (t = 0; n[t] != '\0'; t++)
	{
		sum +=( n[t]-'0');
	}
	if (sum >= 100){
		i = sum / 100;
		print(i);
		printf(" ");
		j = (sum / 10) % 10;
		print(j);
		printf(" ");
		k = sum % 10;
		print(k);
	}
	else if (sum < 100 && sum >= 10){
		j = (sum / 10) % 10;
		print(j);
		printf(" ");
		k = sum % 10;
		print(k);
	}
	else {
		print(sum);
	}
	
	return 0;
}