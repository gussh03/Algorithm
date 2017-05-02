#include<iostream>
using namespace std;
void input();
void floyd();
int vertex, edge, arr[402][402];
void init();
/*사이클 이라는게 자기자신한테 돌아오는 것*/
int main() {
	int res = 987654321;
	input();
	floyd();

	for (int i = 1; i <= vertex; i++) {
		if (arr[i][i] != 0 && arr[i][i] < res)
			res = arr[i][i];
	}
	if (res == 987654321)
		cout << "-1" << endl;
	else
		cout << res << endl;
	return 0;
}
void input() {
	int a, b, c;
	cin >> vertex >> edge;
	for (int i = 0; i < edge; i++) {
		cin >> a >> b >> c;
		arr[a][b] = c;
	}
	for (int i = 1; i <= vertex; i++) {
		for (int j = 1; j <= vertex; j++) {
			if (arr[i][j] == 0) arr[i][j] = 987654321;
		}
	}
}
void floyd() {
	for (int s = 1; s <= vertex; s++) {
		for (int start = 1; start <= vertex; start++) {
			for (int end = 1; end <= vertex; end++) {
				if (arr[start][end] > arr[start][s] + arr[s][end])
					arr[start][end] = arr[start][s] + arr[s][end];
			}
		}
	}
}