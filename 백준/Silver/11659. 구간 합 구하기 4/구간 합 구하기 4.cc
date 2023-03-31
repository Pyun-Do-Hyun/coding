#include <iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, t;
	cin >> n >> t;

	int a[100001];
	

	for (int i = 1; i <= n; i++) {
		int v;
		cin >> v;
		a[i] = a[i - 1] + v;
	}

	for (int i = 0; i < t; i++) {
		int f, e;
		cin >> f >> e;
		cout << a[e] - a[f - 1]<<"\n";
	}
	return 0;
}