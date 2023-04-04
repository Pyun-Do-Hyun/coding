
#include <iostream>
#include <queue>

using namespace std;



int main() {
	ios:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int cnt = 1;
		queue<pair<int,int>> q;
		priority_queue <int> pq;
		int n, m;
		cin >> n >> m;
		for(int i = 0; i < n;i++){
			int z;
			cin >> z;
			q.push(make_pair(i, z));
			pq.push(z);
		}
		while (!q.empty()) {
			if (pq.top() > q.front().second) {
				q.push(q.front());
				q.pop();
			}
			else {
				if (q.front().first == m) {
					cout << cnt << '\n';
					break;
				}
				else {
					q.pop();
					pq.pop();
					cnt++;
				}


			}

		}

	}
	return 0;
}