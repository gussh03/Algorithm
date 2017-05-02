#include<iostream>
using namespace std;

int xcnt, ycnt, res, ch; 
int map[102][102];
int dir[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
int prevc;
void input() {
	cin >> ycnt >> xcnt;
	for (int i = 0; i < ycnt; i++) {
		for (int j = 0; j < xcnt; j++) {
			cin >> map[i][j]; 
		}
	}
}
void check() {
	int cheese = 0;
	for (int i = 0; i < ycnt; i++) {
		for (int j = 0; j < xcnt; j++) {
			if (map[i][j] == 1) {
				cheese++;
			}
		}
	}
	if (cheese)
		prevc = cheese;

	
}
int init() {
	int reval = 0;

	for (int i = 0; i < ycnt; i++) {
		for (int j = 0; j < xcnt; j++) {
			if (map[i][j] == 7 || map[i][j] == 3) {
				map[i][j] = 0;
			}
			if (map[i][j] == 1) {
				reval = 1;
			}
			
		}
	}
	return reval;
}
void dfs(int x, int y) {
	if (x < 0 || y < 0 || x >= xcnt || y >= ycnt)
		return;
	if (map[y][x] == 1) {
		map[y][x] = 3; //삭힌치즈
		return;
	}
	if (map[y][x] == 7 || map[y][x] == 3) 
		return;
	
	map[y][x] = 7; //지나간 공기는 7로 바꾸어줌
	
	for (int i = 0; i < 4; i++) {
		dfs(x + dir[i][0], y + dir[i][1]);	 
	}

}

int main() {
	int tmp = 1;
	input();
	check();
	if (prevc == 0) {
		cout << "0\n0\n";
		return 0;
	}
	do {
		dfs(0, 0);
		tmp = init();
		check();
		res++;
	} while (tmp);

	cout << res << endl;
	cout << prevc << endl;
	return 0;
}