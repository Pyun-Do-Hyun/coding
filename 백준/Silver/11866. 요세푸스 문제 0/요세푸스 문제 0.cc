#define _CRT_SECURE_NO_WARNINGS	
#include <iostream>
#include <queue>
 
using namespace std;
 
queue<int> q;
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	cout << "<";
	for (int i = 0; i < n-1; i++) {

		for (int j = 1; j < k; j++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front()<<", ";
		q.pop();
	}
	cout << q.front() << ">";
	return 0;
}