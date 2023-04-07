#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int dohaji[100][100] = { 0, };
	int n;
	cin >> n;
	int sum = 0;
	int x, y;
	while (n--) {
		cin >> x >> y;
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				if (dohaji[i][j] != 1) {
					sum ++;
					dohaji[i][j] = 1;
				}
			}
		}
	}
	cout << sum;
	return 0;
}