#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include<stdio.h>
int main() {
	int num[10000];
	int tr = 0;
	int sum = 0;
	for (int i = 1; i <= 50; i++) {
		for (int k = 1; k <= i; k++) {
			num[tr] = i;
			tr++;
			if (tr == 1000)
				break;
		}
	}

	int a, b;
	scanf("%d %d", &a, &b);
	for (int m = a; m <= b; m++) {
		sum += (int)num[m-1];
	}
	printf("%d", sum);

	return 0;
}