#define _CRT_SECURE_NO_WARNINGS	
#include <iostream>
 
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum=99;
	if (n < 100)
		cout << n;
	else {
		for (int i = 100; i <= n; i++) {
			if (i / 100 - i / 10 % 10 == i / 10 % 10 - i % 10)
				sum++;
		}
		cout << sum;
	}


	return 0;
}