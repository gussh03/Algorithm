#include<iostream>
using namespace std;
int startNode, nodeNum, removeNode, leafNode, parent[55][55], visit[55];
/*리프노드는 자식 노드가 0인 개수*/
void input();
void dfs(int num);
void print();
int main() {
	input();
	if (startNode == removeNode)
		cout << "0" << endl;
	else {
		dfs(startNode);
		cout << leafNode << endl;
	}
	return 0;
}
void input() {
	int p = 0;
	cin >> nodeNum;
	for (int i = 0; i < nodeNum; i++) {
		cin >> p;
		if (p == -1)
			startNode = i;
		else
			parent[p][i] = 1;
	}
	cin >> removeNode;
}
void dfs(int num) {
	int tmp = 0;
	
	visit[num] = 1;
	for (int i = 0; i < nodeNum; i++) {
		if (parent[num][i] == 1  && visit[i] == 0&&i!=removeNode) {
			tmp++;
			dfs(i);
		}
	}
	if (tmp == 0)
		leafNode++;
}