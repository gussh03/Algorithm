#include<iostream>
#include<algorithm>
using namespace std;
int stairsNum, arr[302];
void input() {
	cin >> stairsNum;
	for (int i = 1; i <= stairsNum; i++)
		cin >> arr[i];
}
int dp() {
	int res = 0;
	for (int i = 1; i <= stairsNum; i++) {
		arr[i] = max(arr[i + 1] + arr[i], arr[i + 2] + arr[i]) + arr[i];
	}
	return arr[stairsNum];
}
int main() {
	input();

	cout << dp() << endl;
	for (int i = 0; i <= stairsNum; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}