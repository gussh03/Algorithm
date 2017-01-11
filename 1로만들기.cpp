#include<iostream>
using namespace std;
int result = 1000001, num;
int dp(int x) {
	if (x != 1) {
		x % 3 == 0 ? num++, dp(x / 3) : num++, dp(x - 1);
		x % 2 == 0 ? num++, dp(x / 2) : 0;
	}else {
		result = result > num ? num: result;
	}
	return result;
}
int main() {
	int x;
	cin >> x;
	cout << dp(x) << endl;
	return 0;
}