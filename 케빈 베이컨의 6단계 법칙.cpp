#include<iostream>
#include<algorithm>
using namespace std;
int user, friendConnect, A, B, arr[102][102];
void input() {
	cin >> user >> friendConnect;
	for (int i = 1; i <= user; i++) {
		for (int j = 1; j <= user; j++) {
			if (i == j) arr[i][j] = 0;
			else arr[i][j] = 1000000;
		}
	}
	for (int i = 0; i < friendConnect; i++) {
		cin >> A >> B;
		arr[A][B] = arr[B][A] = 1;
	}
	
}
void floyd() {
	for (int s = 1; s <= user; s++) {
		for (int start = 1; start <= user; start++) {
			for (int end = 1; end <= user; end++) {
				if (arr[start][end] > arr[start][s] + arr[s][end])
					arr[start][end] = arr[start][s] + arr[s][end];
			}
		}
	}
}
int result() {
	int res = 0, max = 987654321;
	for (int i = 1; i<=user; i++) {
		int tmp = 0;
		for (int j = 1; j <= user; j++) {
			if (i == j) continue;
			tmp += arr[i][j];
		}
		if (tmp < max) {
			max = tmp;
			res = i;
		}
	}
	return res;
}
int main() {
	input();
	floyd();
	cout << result() << endl;
	return 0;
}