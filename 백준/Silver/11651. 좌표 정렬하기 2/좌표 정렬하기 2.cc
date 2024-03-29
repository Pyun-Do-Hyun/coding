#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>>v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(pair<int, int>(b, a));
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].second << " " << v[i].first<<'\n';
	}

	return 0;
}