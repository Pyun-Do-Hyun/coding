#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
using namespace std;

stack <int> st;

int main() {
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num,sum=0;
		cin >> num;
		for (int j = 2; j < num; j++) {
			if (num % j == 0)
				sum++;
		}
		if (sum == 0)
			st.push(num);
		if (num == 1)
			st.pop();
	}
	cout << st.size();
	return 0;
}