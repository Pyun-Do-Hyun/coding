#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int total=0, over;
	int dwarf[9];
	for (int i = 0; i < 9; i++)
	{
		int x;
		scanf("%d", &x);
		dwarf[i] = x;
		total += dwarf[i];

	}

	over = total - 100;
	int p,q;
	for (int i = 0; i < 8; i++) {
		for (int k = 1; k < 9; k++) {
			if (dwarf[i] + dwarf[k] == over)
			{
				p = i; q = k;
			}
		}
	}

	int r_dwarf[7];
	int j = 0;
	for (int i = 0; i < 9; i++) {
		if (i != q && i != p) {
			r_dwarf[j] = dwarf[i];
			j++;
		}
	}
	int tmp;
	for (int i = 0; i < 6; i++) {
		for (j = i + 1; j < 7; j++) {
			if (r_dwarf[j] < r_dwarf[i])
			{
				tmp = r_dwarf[i];
				r_dwarf[i] = r_dwarf[j];
				r_dwarf[j] = tmp;
			}
		}
	}
	for (int m = 0; m < 7; m++)
		printf("%d\n", r_dwarf[m]);
	return 0;
}