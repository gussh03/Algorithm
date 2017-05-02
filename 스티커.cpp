#include<iostream>
#include<algorithm>
using namespace std;
int arr[2][100002], n;
void input() {
	cin >> n;
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
}
int dp() {
	for (int i = 1; i <= n; i++) {
		arr[0][i] = max(arr[1][i - 1], arr[1][i - 2])+ arr[0][i];
		arr[1][i] = max(arr[0][i - 1], arr[0][i - 2]) + arr[1][i];
	}
	return max(arr[0][n], arr[1][n]);
}
int main() {
	int testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		input();
		cout << dp() << endl;
	}
	return 0;
}