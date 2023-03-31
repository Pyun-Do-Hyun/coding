#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	float n[1000];
	float max = 0;
	for (int i = 0; i < t; i++) {
		cin >> n[i];
		if (max < n[i])
			max = n[i];
	}
	float sum = 0;
	for (int i = 0; i < t; i++) {
		n[i] = (n[i] / max) * 100;
		sum += n[i];
	}
	float re;
	re = sum / t;
	cout << re;



	return 0;
}