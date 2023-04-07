#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
vector<int>sm;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	
	sm.push_back(v[0]);
	int sum = sm[0];
	for (int i = 1; i < n; i++) {
		sm.push_back(sm[i-1] + v[i]);
		sum += sm[i];
	}
	cout << sum;

	return 0;
}