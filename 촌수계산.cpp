#include<iostream>
#include<queue>
using namespace std;
void input();
int bfs(int num);
int personNum, arr[102][102], visit[102], caseNum, parent, children, n1, n2;
queue<int> que;
int main() {
	input();
	int num = bfs(n1);
	if (num > 0)
		cout << num << endl;
	else
		cout << "-1" << endl;

	return 0;
}
void input() {
	cin >> personNum;
	cin >> n1 >> n2;
	cin >> caseNum;
	for (int i = 0; i < caseNum; i++) {
		cin >> parent >> children;
		arr[parent][children] = arr[children][parent] = 1;
	}
}
int bfs(int num) {
	int tmp = 0, countNum = 0;
	que.push(num);
	while (!que.empty()) {
		int q = que.size();
		countNum++;
		for (int i = 0; i < q; i++) {
			tmp = que.front();
			que.pop();
			visit[tmp] = 1;
			for (int i = 1; i <= personNum; i++) {
				if (visit[i] == 0 && arr[tmp][i] == 1) {
					visit[i] = 1;
					que.push(i);
					if (n2 == i)
						return countNum;
				}
			}
		}
	}
	countNum = 0;
	return countNum;
}