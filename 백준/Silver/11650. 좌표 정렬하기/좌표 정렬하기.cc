#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<pair<int, int>> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back({ x,y });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
	


	return 0;
}