#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;

int main() {

	int n;
	cin>>n;
	queue<int> card;

	for (int i = 1; i <= n; i++) {
		card.push(i);
	}

	for (; card.size() != 1;) {
		card.pop();
		if (card.size() == 1) break;
		card.push(card.front());
		card.pop();
	}

	cout << card.front();



	return 0;
}