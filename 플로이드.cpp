#include<iostream>
#include<algorithm>
using namespace std;
int cityNum, busNum, arr[103][103], startCity, endCity, busCost;
void input() {
	cin >> cityNum;
	cin >> busNum;
	for (int bus = 0; bus < busNum; bus++) {
		cin >> startCity >> endCity >> busCost;
		if (arr[startCity][endCity] > 0) {
			arr[startCity][endCity] = min(arr[startCity][endCity], busCost);
		}
		else {
			arr[startCity][endCity] = busCost;
		}
	}
}
void init() {
	for (int i = 1; i <= cityNum; i++) {
		for (int j = 0; j <= cityNum; j++) {
			if (i != j && arr[i][j] == 0) arr[i][j] = 1000000;
		}
	}
	for (int s = 1; s <= cityNum; s++)
		arr[s][s] = 0;
}
void floyd() {
	init();
	for (int s = 1; s <= cityNum; s++) {
		for (int start = 1; start <= cityNum; start++) {
			for (int end = 1; end <= cityNum; end++) {
				if (arr[start][end] > arr[start][s] + arr[s][end]) {
					arr[start][end] = arr[start][s] + arr[s][end];
				}
			}
		}
	}
}
void print() {
	for (int i = 1; i <= cityNum; i++) {
		for (int j = 1; j <= cityNum; j++) {
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