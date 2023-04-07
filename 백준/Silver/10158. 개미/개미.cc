#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int w, h;
	cin >> w >> h;
	int x, y;
	cin >> x >> y;
	int t;
	cin >> t;
	int xt = t % (w * 2), yt = t % (h * 2);
	int xj = 1, yj = 1;
	
	while (xt--) {
		if (x - 1 < 0 && xj == -1)
			xj = 1;
		if (x + 1 > w && xj == 1)
			xj = -1;
		x += xj;
	}
	while (yt--) {
		if (y - 1 < 0 && yj == -1)
			yj = 1;
		if (y + 1 > h && yj == 1)
			yj = -1;
		y += yj;
	}
	cout << x <<" "<< y;
	return 0;
}