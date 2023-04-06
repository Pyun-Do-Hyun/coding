#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



struct person{
	int age, idx;
	string str;

};

bool cmp(const person& now, const person& last) {
	if (now.age == last.age) return now.idx < last.idx;
	return now.age < last.age;

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	person p[100001];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i].age >> p[i].str;
		p[i].idx = i;
	}
	
	sort(p, p + n, cmp);

	for (int i = 0; i < n; i++) {
		cout << p[i].age << " " << p[i].str << '\n';
	}
	

	return 0;
}
