#include <iostream>
#include <algorithm>

using namespace std;

int com(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}
	string s[20000];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n,com);

	for (int i = 0; i < n; i++) {
		if (s[i] == s[i - 1])
			continue;
		cout << s[i] << endl;
	}


	return 0;
}