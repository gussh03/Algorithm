#include<iostream>
using namespace std;
int num, arr[102][102];
void input() {
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			cin >> arr[i][j];
		}
	}
}
void floyd() {
	for (int s = 1; s <= num; s++) {
		for (int start = 1; start <= num; start++) {
			for (int end = 1; end <= num; end++) {
				if (arr[start][s] && arr[s][end])
					arr[start][end] = 1;
			}
		}
	}
}
void print() {
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	input();
	floyd();
	print();
	return 0;
}