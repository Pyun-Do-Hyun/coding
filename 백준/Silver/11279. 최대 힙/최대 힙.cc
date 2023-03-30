#define _CRT_SECURE_NO_WARNINGS	
#include <iostream>
#include <queue>
 
using namespace std;
 
priority_queue<int> q;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	while(n--) {
		int t;
		cin >> t;
		if (t == 0) {
			if (q.empty())
				cout << "0\n";
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else
		q.push(t);
	}
	return 0;
}