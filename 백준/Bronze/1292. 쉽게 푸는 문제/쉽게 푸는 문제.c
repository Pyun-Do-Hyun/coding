#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000
int main() {
	int m[SIZE];
	int a, b;
	int cnt = 0;
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < i; j++) {
			if (cnt == 1000)
				break;
			m[cnt] = i;
			cnt++;
		}
	}

	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		sum += m[i-1];
	}
	printf("%d", sum);



	return 0;
}