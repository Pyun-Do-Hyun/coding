#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int sum = 0;
	char a[1000001];
	scanf("%s", &a);
	int len = strlen(a);

	if (len % 3 == 1) {
		printf("%d", a[0] - '0');
	}
	else if (len % 3 == 2) {
		printf("%d", 2 * (a[0] - '0') + a[1] - '0');
	}
	for (int i = len % 3; i < len; i += 3) {
		printf("%d", 4 * (a[i] - '0') + 2 * (a[i + 1] - '0') + a[i + 2] - '0'); 
	}

	return 0;
}