#include<iostream>
using namespace std;
int item, connected, arr[105][105], big, small, cache[105];
void init() {
	for (int i = 1; i <= item; i++) {
		for (int j = 1; j <= item; j++) {
			if (i == j) arr[i][j] = 0;
			else if (arr[i][j] == 0) arr[i][j] = 987654321;
		}
	}
}
void input() {
	cin >> item >> connected;
	for (int i = 0; i < connected; i++) {
		cin >> big >> small;
		arr[big][small] = 1;
	}
}
void floyd() {
	init();
	for (int s = 1; s <= item; s++) {
		for (int start = 1; start <= item; start++) {
			for (int end = 1; end <= item; end++) {
				if (arr[start][end] > arr[start][s] + arr[s][end])
					arr[start][end] = arr[start][s] + arr[s][end];
			}
		}
	}
}
void result() {
	for (int i = 1; i <= item; i++) {
		for (int j = 1; j <= item; j++) {
			if (arr[i][j] != 987654321 && arr[i][j] != 0) {
				cache[i]++; cache[j]++;
			}
		}
	}
}
int main() {
	input();
	floyd();
	result();
	for (int i = 1; i <= item; i++)
		cout << item - cache[i] - 1 << endl; // 두번 + 되는 경우가 있기때문에 -1 해준다
	return 0;
}