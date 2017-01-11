#include<iostream>
#include<queue>
using namespace std;
int n;
int map[102][102];
int tmp[102][102];

typedef struct pos {
	int x;
	int y;
}Pos;
Pos p[102]; //구조체 배열
int cnt = 0; //구조체배열의 인덱스
void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) {
				p[cnt].x = j;
				p[cnt].y = i;
				cnt++;
			}
		}
	}
}

void bfs(int x, int y) {
	int tx, ty;
	tx = x;
	ty = y;
	if(                                                                                                                                     )
	for (int i = 0; i < n; i++) {
		if (map[tx][i] == 1) {
			bfs(i, tx);
		}
	}
}


int main() {
	input();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			bfs(j, i);
		}
	}
	return 0;
}