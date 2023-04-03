#include <iostream>
#include <algorithm>


using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	int n;
	cin >> n;
	int sum = n;
	for (int i = 0; i < n; i++) {

		cin >> str;
		int f = 1;
		for (int j = 1; j < str.length(); j++) {
			for (int t = 0; t < j; t++) {
				if (str[j] != str[j - 1] && str[j] == str[t]) {
					f--;
					break;

				}
			}
		}
		if (f != 1)
			sum--;
	}
		cout << sum;
	return 0;
}