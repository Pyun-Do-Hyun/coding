#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[100];
	int n, m;
	cin >> n>>m;
	int sum = 0;
	int result=0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (sum <= m && sum > result)
					result = sum;
			}
		}

	}
	cout << result;
	
	return 0;
}