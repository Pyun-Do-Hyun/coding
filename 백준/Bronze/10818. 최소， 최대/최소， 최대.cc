#include <iostream>
#include <vector>
using namespace std;

int main() {
	int min = 1000000;
	int max = -1000000;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (t > max)
		max = t;
		if (t < min)
			min = t;
	}


	cout << min << " " << max;

	return 0;
}