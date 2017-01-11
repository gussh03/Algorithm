#include<iostream>
#include<queue>
#include<stdio.h>
using namespace std;
int map[101][101] = { 0 };
int dir[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
int n, m , len = 0; //n 세로, m 가로

typedef struct pos{
	int x;
	int y;
}Pos;
queue<Pos> q;

void input() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%1d", &map[i][j]);
		}
	}
}

void bfs(int cx, int cy) {
	Pos p;
	int tx, ty, size = 0, cnt = 0;
	p.x = cx;
	p.y = cy;
	q.push(p);
	while (!q.empty()) {
		if (size == cnt)
		{
			size = q.size();
			cnt = 0;
			len++;
		}
		p = q.front();
		q.pop();
		tx = p.x;
		ty = p.y;
		if (tx == m - 1 && ty == n - 1) {
			break;
		}
		
		for (int i = 0; i < 4; i++) {
			if (map[ty + dir[i][1]][tx + dir[i][0]] == 1) {
				if (ty + dir[i][1] >= 0 && tx + dir[i][0] >= 0 && ty + dir[i][1] < n &&tx + dir[i][0] < m) {
					p.x = tx + dir[i][0];
					p.y = ty + dir[i][1];
					map[p.y][p.x] = 0;
					q.push(p);
				}
			}
		}
		cnt++;
	}
}
void print() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	input();
	bfs(0, 0);
	cout << len << endl;
	return 0;
}
