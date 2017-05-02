#include<iostream>
using namespace std;
int student, loadNum, town, arr[1002][1002], reArr[1002][1002];
void init() {
	for (int i = 1; i <= student; i++) {
		for (int j = 1; j <= student; j++) {
			if (i != j && arr[i][j] == 0) arr[i][j] = 987654321;
			else if (i == j) arr[i][j] = 0;
		}
	}
}
void input() {
	int start, end, time;
	cin >> student >> loadNum >> town;
	for (int i = 0; i < loadNum; i++) {
		cin >> start >> end >> time;
		arr[start][end] = time;
	}
}
void floyd() {
	init();
	for (int s = 1; s <= student; s++) {
		for (int start = 1; start <= student; start++) {
			for (int end = 1; end <= student; end++) {
				if (arr[start][end] > arr[start][s] + arr[s][end])
					arr[start][end] = arr[start][s] + arr[s][end];
			}
		}
	}
}
int result() {
	int maxTime = -1;
	for (int i = 1; i <= student; i++) {
		int tmp1 = arr[town][i];
		int tmp2 = arr[i][town];
		if (tmp1 + tmp2 > maxTime) maxTime = tmp1 + tmp2;
	}
	return maxTime;
}
int main() {
	input();
	floyd();
	cout << result() << endl;
	return 0;
}