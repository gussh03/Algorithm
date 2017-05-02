#include<iostream>
using namespace std;
int res=0;
int visit[51] = { 0 };
int dir[4][2] = { { 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 } };
int map[51][51], m, n, k, test, x, y;
void init() {
	cin >> m >> n >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			map[i][j] = 0;
		}
	}
	res = 0;
}

void dfs(int x, int y) {
	if (x < 0 || y < 0 || x >= m || y >= n)
		return;

	if (map[y][x] == 0 || map[y][x] == 2)
		return;
	
	for (int i = 0; i < 4; i++) {
		map[y][x] = 2;
		dfs(x + dir[i][1], y + dir[i][0]);
	}
}

int main() {
	cin >> test;

	for (int i = 0; i < test; i++) {
		init();

		for (int j = 0; j < k; j++) {
			cin >> x >> y;
			map[y][x] = 1;
		}
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (map[i][j] == 1) {
					dfs(j, i);
					res++;
				}
			}
		}
		cout << res << endl;
	}


	return 0;
}