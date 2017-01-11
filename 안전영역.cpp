#include<iostream>
#include <algorithm>
using namespace std;

int N, Max, Min , res, tmp;
int map[101][101], temp[101][101];
int dir[4][2] = { { 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 } };

void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			temp[i][j] = map[i][j];
			Max = max(Max, map[i][j]);
		}
	}
}

void init() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			map[i][j] = temp[i][j];
		}
	}
	tmp = 0;

}

void dfs(int x, int y) {

	if (x < 0 || y < 0 || x >=  N || y >= N)
		return;


	if (map[y][x] <= Min || map[y][x] == -1)
		return;

	map[y][x] = -1;

	for (int i = 0; i < 4; i++) {
		dfs(x + dir[i][0], y + dir[i][1]);
	}
}

int main() {
	input();
	while (Min <= Max) {
		init();

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] > Min) {
					dfs(j, i);
					tmp++;
				}
				else if (map[i][j] == Max) {
					tmp = 0;
				}
			}
		}
		Min++;
	
		res = max(res, tmp);
	}
	cout << res << endl;
	return 0;
}
