#include<iostream>
#include<algorithm>
using namespace std;
struct mooncake{
	float inventory;
	float price;
	float unit;
};
int cmp(mooncake a, mooncake b) {
	return a.unit> b.unit;//½µÐòÅÅÐò
}
int main() {
	int n, d;
	float result=0.0;
	cin >> n >> d;
	mooncake *a = new mooncake[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i].inventory;
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i].price;
	}
	for (int i = 0; i < n; i++) {
		a[i].unit = a[i].price / a[i].inventory;
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		if (d >=a[i].inventory) {
			result += a[i].price;
		}
		else {
			result += a[i].unit*d;
			break;
		}
		d = d - a[i].inventory;
	}
	free(a);
	printf("%.2f", result);
	return 0;
}