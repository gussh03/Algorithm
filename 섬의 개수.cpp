#include<iostream>
using namespace std;
void input();
void init();
void dfs(int x, int y);
int weight = 987654321, height = 987654321, arr[52][52], visit[52][52], dirX[8] = { 0,1,1,1,0,-1,-1,-1 }, dirY[8] = { 1,1,0,-1,-1,-1,0,1 };
int countNum;
int main() {
	while (1) {
		input();
		if (weight == 0 && height == 0)
			break;
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < weight; j++) {
				if (arr[i][j] == 1) {
					dfs(j, i);
					countNum++;
				}	
			}
		}
		cout << countNum << endl;
		init();
	}
	return 0;
}
void init() {
	countNum = 0;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < weight; j++) {
			arr[i][j] = 0;
		}
	}
}
void input() {
	cin >> weight >> height;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < weight; j++) {
			cin >> arr[i][j];
		}
	}
}
void dfs(int x, int y) {
	if (x < 0 || y < 0 || x >= weight || y >= height)
		return;
	if (arr[y][x] == 0)
		return;
	arr[y][x] = 0;
 	for (int i = 0; i < 8; i++) {
		int tmpx = x + dirX[i];
		int tmpy = y + dirY[i];
		if (arr[tmpy][tmpx] == 1) {
			dfs(tmpx, tmpy);
		}
	}
}