#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
int num, arr[25][25], cntx, cnty, block;
int dir[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
priority_queue<int> pq;
void input() {
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
}

void dfs(int x, int y) {
	if (x < 0 || y < 0 || x >= num || y >= num) return;

	if (arr[y][x] == 0 || arr[y][x] == -1) return;

	arr[y][x] = -1;
	block++;

	for (int i = 0; i < 4; i++) {
		cntx = x + dir[i][1];
		cnty = y + dir[i][0];
		if (arr[cnty][cntx] == 1) {
			dfs(cntx, cnty);
		}
	}
}
int main() {
	int res = 0;
	input();

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (arr[i][j] == 1) {
				dfs(j, i);
				res++;
				pq.push(-block);
				block = 0;

			}
		}
	}
	cout << res << endl;

	while (!pq.empty()) {
		cout << -pq.top() << endl;
		pq.pop();
	}

	return 0;
}