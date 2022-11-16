#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	
	char a[256];
	while (1)
	{
		int sum = 0;
		gets(a);
		if (a[0] == '#')
			break;


		for (int k = 0;k<strlen(a); k++)
		{
			if (a[k] == 'a' || a[k] == 'e' || a[k] == 'i' || a[k] == 'o' || a[k] == 'u'||a[k] == 'A' || a[k] == 'E' || a[k] == 'I' || a[k] == 'O' || a[k] == 'U')
				sum++;
		}
		printf("%d\n", sum);
	}
	return 0;
}

