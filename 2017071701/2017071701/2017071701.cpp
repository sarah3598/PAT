#include<iostream>
#include<math.h>
using namespace std;
int main() {
	char A[10], B[10];
	char Da,Db;
	int Pa=0, Pb=0;
	int i;
	int counta=0, countb=0;
	cin >> A >> Da >> B >> Db;
	for (i = 0; i < sizeof(A); i++) {
		if (A[i] == Da) {
			counta++;
		}
	}
	if (counta == 0)
		Pa = 0;
	else {
		for (i = 1; i <= counta; i++) {
			Pa += (Da - '0')*(int)pow(10, i - 1);
		}
	}
	for (i = 0; i < sizeof(B); i++) {
		if (B[i] == Db) {
			countb++;
		}
	}
	if (countb == 0)
		Pb = 0;
	else {
		for (i = 1; i <= countb; i++) {
			Pb += (Db - '0')*(int)pow(10, i - 1);
		}
	}
	cout << Pa+Pb << endl;
	return 0;
}