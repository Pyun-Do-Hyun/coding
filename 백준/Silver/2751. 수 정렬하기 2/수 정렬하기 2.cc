#include <iostream>
#include <algorithm>
using namespace std;

int num[1000000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num, num + n);
	for (int i = 0; i < n; i++) {
		cout<< num[i]<<'\n';
	}


	return 0;
}
