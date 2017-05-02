#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n, m, x, y, cache[10001], maxNum, sizeNum;
vector<int> vec[10001];
queue<int> que;
void input() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		vec[y].push_back(x);
	}
}
void bfs() {
	int tmp = 0;
	for (int i = 1; i <= n; i++) {
		int visit[10001] = { 0, }, countNum = 0;
		que.push(i);
		visit[i] = 1;
		countNum++;
		while (!que.empty()) {
			tmp = que.front();
			que.pop();
			for (int j = 0; j < vec[tmp].size(); j++) {
				int now = vec[tmp][j];
				if (visit[now] == 0) {
					visit[now] = 1;
					que.push(now);
					countNum++;
				}
			}
		}
		if (maxNum < countNum) {
			sizeNum = 0;
			maxNum = countNum;
			cache[sizeNum++] = i;
		}else if (maxNum == countNum) {
			cache[sizeNum++] = i;
		}
	}
}
int main() {
	input();
	bfs();
	for (int i = 0; i < sizeNum; i++) {
		cout << cache[i] << " ";
	}
	cout << endl;
	return 0;
}