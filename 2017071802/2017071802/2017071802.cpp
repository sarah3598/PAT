#define PI 3.14
#include <stdio.h>
int main()
{
	double r, v; 
	scanf("%lf", &r);////��doubleʱ����Ҫ��lf
	v = PI*r*r*r * 4 / 3; 
	printf("%.2lf\n", v); 
	return 0;
}