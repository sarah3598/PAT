#define PI 3.14
#include <stdio.h>
int main()
{
	double r, v; 
	scanf("%lf", &r);////用double时，需要用lf
	v = PI*r*r*r * 4 / 3; 
	printf("%.2lf\n", v); 
	return 0;
}