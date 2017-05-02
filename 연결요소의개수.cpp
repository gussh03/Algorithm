//#include<iostream>
//#include<queue>
//using namespace std;
//int vertex, edge, u, v, arr[1002][1002], visit[1002], countNum;
//queue<int> ver;
//void input() {
//	cin >> vertex >> edge;
//	for (int i = 0; i < edge; i++) {
//		cin >> u >> v;
//		arr[u][v] = arr[v][u] = 1;
//	}
//}
//void bfs(int start) {
//	ver.push(start);
//	int tmp;
//	while (!ver.empty()) {
//		tmp = ver.front();
//		ver.pop();
//		visit[tmp] = 1;
//		for (int i = 0; i <= vertex; i++) {
//			if (arr[tmp][i] == 1  && visit[i] != 1) {
//				ver.push(i);
//				visit[i] = 1;
//			}
//		}
//	}
//}
//int main() {
//	input();
//	for (int i = 1; i <= vertex; i++) {
//		if (visit[i] != 1) {
//			bfs(i);
//			countNum++;
//		}
//	}
//	cout << countNum  << endl;
//	return 0;
//}

#include<iostream>
#include<vector>
using namespace std;
int vertex, edge, u, v, connectedNum, visit[1002];// 1 : true, 0 : false
vector<int> arr[1002];
void input() {
	cin >> vertex >> edge;
	for (int i = 0; i < edge; i++) {
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
}
void dfs(int start) {
	visit[start] = 1;
	int arrSize = arr[start].size();
	for (int i = 0; i < arrSize; i++) {
		int tmp = arr[start][i];
		if (visit[tmp] == 0) {
			dfs(tmp);
		}
	}
}
int main() {
	input();
	for (int i = 1; i <= vertex; i++) {
		if (visit[i] == 0) {
			dfs(i);
			connectedNum++;
		}
	}
	cout << connectedNum << endl;
	return 0;
}