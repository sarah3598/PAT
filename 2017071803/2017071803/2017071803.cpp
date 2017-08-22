#include <stdio.h>  
#include <iostream>  
#include <math.h>  
using namespace std;
const double PI = 3.14159;
int main() {
	int r, h;
	double x;
	cin >> h >> r;
	//pi* r的平方*高*10负3次方  
	x = (pow(r, 2)*PI*h)*(1e-3);
	//判断是否是小数  
	int result = (int)(20 / x);
	if (result == x) {
		cout << result << endl;
	}
	else {
		cout << result + 1 << endl;
	}
	return 0;
}