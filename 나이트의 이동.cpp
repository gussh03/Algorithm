#include<iostream>
#include<queue>
using namespace std;

typedef struct pos {
	int x, y;
}Pos;
int bfs(int x, int y, int xe, int ye, int len) {
	int cntx = 0, cnty = 0, tx = 0, ty = 0, qqq = 0, queSize = 0, result = 0, arr[300][300] = {0};
	int dir[8][2] = { { -1,-2 },{ -2,-1 },{ -2,1 },{ -1,2 },{ 1,-2 },{ 2,-1 },{ 1,2 },{ 2,1 } };
	queue<Pos> que;
	Pos pos, entryPos;
	pos.x = x;
	pos.y = y;
	que.push(pos);
	arr[y][x] = -1;
	while (!que.empty()) {
		if (queSize == qqq) {
			queSize = que.size();
			result++;
			qqq = 0;
		}
		entryPos = que.front();
		que.pop();
		cntx = entryPos.x; 
		cnty = entryPos.y;
		if (cntx == xe && cnty == ye ) {
			result--;
			break;
		}
		for (int i = 0; i < 8; i++) {
			tx = cntx + dir[i][1];
			ty = cnty + dir[i][0];
			if (tx >= 0 && ty >= 0 && tx < len && ty < len && arr[ty][tx] != -1) {
				pos.x = tx;
				pos.y = ty;
				que.push(pos);
				arr[ty][tx] = -1;
			}
		}
		qqq++;
	}
	return result;
}
int main() {
	int len, xstart, ystart, xend, yend, testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> len;
		cin >> xstart >> ystart;
		cin >> xend >> yend;
		cout << bfs(xstart, ystart, xend, yend, len) << endl;
	}
	return 0;
}