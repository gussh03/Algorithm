#include<iostream>
#include<queue>
using namespace std;
int comp, fri, x, y, res = 0; 
int map[103][103] = { 0 };
int visit[103] = { 0 };
queue<int> q;

void input() {
	cin >> comp >> fri;
	for (int i = 0; i < fri; i++) {
		cin >> x >> y;
		map[y][x] = map[x][y] = 1;
	}
}

void bfs(int x) {
	int tmp = 0;

	q.push(x);
	visit[x] = 1;
	while (!q.empty()) {
		tmp = q.front();
		q.pop();
		for (int i = 0; i <= comp; i++) {
			if (map[tmp][i] == 1 && visit[i] == 0) {
				q.push(i);
				visit[i] = 1;
				res++;
			}
		}
	}
}

int main() {

	input();
	bfs(1);
	cout << res << endl;
	return 0;
}