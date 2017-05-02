#include<iostream>
#include<queue>
using namespace std;
int height, width, dirx[4] = { 0,1,0,-1 }, diry[4] = { 1,0,-1,0 }, visit[52][52], minD = -1;
char arr[52][52];
typedef struct pos {
	int x, y;
}Pos;
void input() {
	cin >> height >> width;
	for (int i = 0; i < height; i++) {
		cin >> arr[i];
	}
	
}
void init() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			visit[i][j] = { 0 };
		}
	}
	minD = -1;
}
int bfs(int x, int y) {
	queue<Pos> que;
	Pos now, point;
	int px, py, cntx, cnty;
	now.x = x;
	now.y = y;
	que.push(now);
	while (!que.empty()) {
		int qsize = que.size();
		for (int i = 0; i < qsize; i++) {
			point = que.front();
			px = point.x; py = point.y;
			visit[py][px] = 1;
			que.pop();
			for (int i = 0; i < 4; i++) {
				cntx = px + dirx[i];
				cnty = py + diry[i];
				if (cntx < 0 || cnty < 0 || cntx > width || cnty > height)
					continue;
				if (arr[cnty][cntx] == 'L' && visit[cnty][cntx] == 0) {
					visit[cnty][cntx] = 1;
					point.x = cntx; point.y = cnty;
					que.push(point);
				}
			}
		}
		minD++;
	}
	return minD;
}
int main() {
	input();
	int res = -1, now;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (arr[i][j] == 'L') {
				now = bfs(j, i);
				if (now > res) res = now;
				init();
			}
		}
	}
	cout << res << endl;
}