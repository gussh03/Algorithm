#include<iostream>
#include<algorithm>
using namespace std;
int dp() {
	int house = 0, arr[1003][3] = { 0 }, r = 0, g = 0, b = 0; //0 : red, 1 : green, 2 : blue
	cin >> house;
	for (int i = 1; i <= house; i++) {
		cin >> r >> g >> b;
		arr[i][0] = min(arr[i - 1][1] + r, arr[i - 1][2] + r);
		arr[i][1] = min(arr[i - 1][0] + g, arr[i - 1][2] + g);
		arr[i][2] = min(arr[i - 1][0] + b, arr[i - 1][1] + b);
	}
	return min(min(arr[house][0], arr[house][1]), arr[house][2]);
}
int main() {
	cout << dp() << endl;
	return 0;
}