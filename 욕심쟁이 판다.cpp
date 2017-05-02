#include<iostream>
#include<algorithm>
using namespace std;
int arr[502][502], cache[502][502], forestSize;
void input() {
	cin >> forestSize;
	for (int i = 0; i < forestSize; i++) {
		for (int j = 0; j < forestSize; j++) {
			cin >> arr[i][j];
		}
	}
}
int dp(int x, int y) {
	int tmpX = 0, tmpY = 0, dirX[4] = { 0,1,0,-1 }, dirY[4] = { 1,0,-1,0 };
	if (cache[y][x] == 0) {
		cache[y][x] == 1;
		for (int i = 0; i < 4; i++) {
			tmpX = x + dirX[i];
			tmpY = y + dirY[i];
			if (y < 0 || x < 0 || x >= forestSize || y >= forestSize)
				continue;
			if (arr[tmpY][tmpX] > arr[y][x]) {
				cache[y][x] = max(cache[y][x], dp(tmpX,tmpY)+1);
			}
		}
		return cache[y][x];
	}
	return cache[y][x];
}
int main() {
	int result = -1;
	input();
	for (int i = 0; i < forestSize; i++) {
		for (int j = 0; j < forestSize; j++) {
			result = max(result, dp(j, i));
		}
	}
	for (int i = 0; i < forestSize; i++) {
		for (int j = 0; j < forestSize; j++) {
			cout << cache[i][j] << " ";
		}
		cout << endl;
	}
	cout << result + 1 << endl;
	return 0;
}