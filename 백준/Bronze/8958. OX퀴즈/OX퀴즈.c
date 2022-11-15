#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	int i, sum;
	char a[81];
	scanf("%d", &i);

	for (int k = 0; k < i; k++)
	{
		sum = 0;
		int d = 0;
		scanf("%s", a);
		for (int h = 0; h < strlen(a); h++)
		{
			if (a[h] == 'O') {
				d++;
				sum += d;
			}
			if (a[h] == 'X')
			{
				d = 0;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}