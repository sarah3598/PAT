#include<stdio.h>  
#include<math.h>
int isPrim(int x);
int main() {
	int m, n;
	int k;
	int count=0;
	scanf_s("%d %d", &m, &n);
	for (k = 2;; k++) {
		if (isPrim(k)) {
			count++;
			if (m <= count&&n >= count) {
				if ((count - m + 1) % 10 == 0)
					printf("%d\n", k);
				else if (count != n)
					printf("%d ", k);
				else
					printf("%d", k);
			}
			if (n <count) break;
		}
	}
}
int isPrim(int x) {
	int i;
	for (i = 2; i <= sqrt(x); i++) {
		if (x%i == 0) return 0;
	}
	return x;
}