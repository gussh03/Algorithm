#include<iostream>
using namespace std;

int main() {
	// °ø½Ä 3x + 5y = num => 5y = num - 3x
	int num, x = 0, y = 0, cnt = 0, res = 0;

	cin >> num;
	for (int i = 0; i <= num / 3; i++) {
		cnt = num - 3 * i;
		if (cnt % 5 != 0) {
			continue;
		}
		else {
			x = i;
			y = cnt / 5;
			break;
		}
	}
	res = x + y;
	if (res == 0) {
		cout << -1 << endl;
	}
	else {
		cout << res << endl;
	}
	
	return 0;
}