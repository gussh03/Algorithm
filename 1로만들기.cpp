#include<iostream>
using namespace std;
int arr[1000001];
int dp(int num) {
	if (num == 1) return 0;

	//num 을 1로 만드는 최소한의 연산
	arr[num] = dp(num - 1) + 1;

	if (num % 3 == 0) {
		int tmp = arr[num / 3];
		if (tmp < arr[num])
			arr[num] = tmp + 1;
	}
	if (num % 2 == 0) {
		int tmp = arr[num / 2];
		if (tmp < arr[num])
			arr[num] = tmp + 1;
	}

	return arr[num];
}
int main() {

	int x;
	cin >> x;
	cout << dp(x) << endl;
	cout << endl;
	return 0;
}