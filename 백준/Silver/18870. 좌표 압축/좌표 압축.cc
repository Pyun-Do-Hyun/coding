#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class num {
public:
	int number;
	int idx;
	int cnt;
};

bool cmpidx(const num & now, const num & last) {
	return now.idx < last.idx;
}
bool cmpnumber(const num & now, const num & last) {
	return now.number < last.number;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	num* Num = new num[1000001];
	for (int i = 0; i < n; i++) {
		cin >> Num[i].number;
		Num[i].idx = i;
	}

	sort(Num, Num + n, cmpnumber);
	Num[0].cnt = 0;
	for (int i = 1; i < n; i++) {
		if (Num[i].number == Num[i - 1].number)
			Num[i].cnt = Num[i - 1].cnt;
		else
			Num[i].cnt =Num[i - 1].cnt+1;
	}
	sort(Num, Num + n, cmpidx);

	for (int i = 0; i < n; i++) {
		cout << Num[i].cnt <<" ";
	}



	return 0;
}