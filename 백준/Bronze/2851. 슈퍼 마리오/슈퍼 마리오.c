#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {

	int num[10];
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", num+i);
	}

	for (int i = 0; i < 10; i++) {
		if (abs(sum + num[i] - 100) <= abs(sum - 100)) {
			sum += num[i];
		}
		else {
			break;
		}
	}
	printf("%d", sum);

	return 0;
}