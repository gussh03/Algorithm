#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int m, n, k, x, y;
int stack[5001];
int map[102][102] = { 0 };
int dir[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
queue<int> q,qres;
priority_queue<int> pq;
int res = 0, abc = 0; //영역의 개수

void input() {
	int xt = 0, yt = 0;
	cin >> m >> n >> k; //세로m, 가로n, 직사각형 개수 k

	for (int i = 1; i <= k * 2; i++) {
		cin >> x >> y;
		if (i % 2 == 0) {
			xt = q.front();
			q.pop();
			yt = q.front();
			q.pop();

			for (int i = yt; i < y; i++)
				for (int j = xt; j < x; j++)
					map[i][j] = 1;
		}
		else {
			q.push(x);
			q.push(y);
		}
	}
}



void dfs(int x, int y) {
	if (x < 0 || y < 0 || x > n-1 || y > m-1) return;
	map[y][x] = 2;
	abc++;
	for (int i = 0; i < 4; i++) {
		if (map[y + dir[i][1]][x + dir[i][0]] == 0) {
			dfs(x + dir[i][0], y + dir[i][1]);
			
		}
	}
}

int main() {
	input();
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 0) {
				dfs(j, i);
				res++;			    
				pq.push(-abc);
				abc = 0;
			}
		}
	}
	cout << res << "\n";
	while (!pq.empty()) {
		cout << -pq.top() << " ";
		pq.pop();
	}

}