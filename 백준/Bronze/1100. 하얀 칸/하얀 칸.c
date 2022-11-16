#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 9

int main() {
	int sum = 0;
	char a[SIZE][SIZE];
	for (int i = 0; i < 8; i++) {
		for (int k = 0; k < SIZE; k++) {
			scanf("%c", &a[i][k]);
		}
	}
	for (int i = 0; i < 8; i+=2) {
		for (int k = 0; k < 8; k+=2) {
			if (a[i][k] == 'F')
				sum++;
		}
	}
	for (int i = 1; i < 8; i+=2) {
		for (int k = 1; k < SIZE; k+=2) {
			if (a[i][k] == 'F')
				sum++;
		}
	}

	printf("%d", sum);
	return 0;
}