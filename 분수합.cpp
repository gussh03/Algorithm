#include<iostream>
using namespace std;

int main() {
	int a, b, c, d;
	int x, y, cnt, tmp;
	
	cin >> a >> b;
	cin >> c >> d;
	x = (a*d) + (b*c);
	y = (b*d);
	cnt = x;
	tmp = y;

	while (1)
	{
		cnt %= tmp;

		if (cnt < tmp) { swap(cnt, tmp); }

		if (tmp == 0) {
			break;
		}
	}


	x /= cnt;
	y /= cnt;

	cout << x << " " << y << endl;

	return 0;
}