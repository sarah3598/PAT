#include <stdio.h>  
#include <iostream>  
#include <math.h>  
using namespace std;
const double PI = 3.14159;
int main() {
	int r, h;
	double x;
	cin >> h >> r;
	//pi* r��ƽ��*��*10��3�η�  
	x = (pow(r, 2)*PI*h)*(1e-3);
	//�ж��Ƿ���С��  
	int result = (int)(20 / x);
	if (result == x) {
		cout << result << endl;
	}
	else {
		cout << result + 1 << endl;
	}
	return 0;
}