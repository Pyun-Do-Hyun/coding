#define _CRT_SECURE_NO_WARNINGS
#include <queue>
#include <iostream>
using namespace std;

int n;

queue<int> q;

int main() {

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	for (; size(q) != 1;) {
		cout << q.front() << " ";
		q.pop();
		q.push(q.front());
		q.pop();

	}

	cout << q.front();





	return 0;
}