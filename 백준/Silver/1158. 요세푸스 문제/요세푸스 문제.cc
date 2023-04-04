#include <iostream>
#include <queue>

using namespace std;


int main() {
	ios:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	queue<int> q;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		q.push(i+1);
	}
	cout << "<";
	while (q.size() > 1) {
		for (int i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout <<q.front()<< ">";


	return 0;
}