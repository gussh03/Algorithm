#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int n, m, v, x, y; //정점, 간선, 탐색 
int map[1002][1002] = { 0 };
int visit[1002] = { 0 };
bool vz[1002];
queue<int> q;
stack<int> s;

void input() {
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		map[x][y] = map[y][x] = 1;
	}
}

void dfs(int v) {
	vz[v] = true;
	cout << v << " ";
	for (int i = 0; i <= n; i++) {
		if (map[v][i] == 1 && !vz[i])
			dfs(i);
	}
}

void bfs(int v) {
	int tmp = 0;
	q.push(v);
	visit[v] = 1;
	while (!q.empty()) {
		tmp = q.front();
		q.pop();
		cout << tmp << " ";
		for (int i = 0; i <= n; i++) {
			if (map[tmp][i] == 1 && visit[i] == 0) {
				q.push(i);
				visit[i] = 1;
			}
		}

	}
}

int main() {

	input();
	dfs(v);
	cout << endl;
	bfs(v);
	return 0;
}