#include<iostream>
using namespace std;
int length, visit[102][102], visit1[102][102], dirX[4] = { 0,1,0,-1 }, dirY[4] = { 1,0,-1,0 };
char arr[102][102], arr1[102][102];
void input();
void init();
void dfs(int x, int y, int color);
int main() {
	int count = 0, count1 = 0;
	input();
	/*적록 색약 아닐때*/
	for (int i = 0; i < length; i++) {
		for(int j = 0; j < length; j++){
			if (arr[i][j] == 'R') {
				dfs(j, i, 1);
				count++;
			}
			if (arr[i][j] == 'G') {
				dfs(j, i, 2);
				count++;
			}
			if(arr[i][j] == 'B'){
				dfs(j, i, 3);
				count++;
			}
		}
	}
	init();
	/*적록 색약 일때*/
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (arr[i][j] == 'G') {
				dfs(j, i, 2);
				count1++;
			}
			if (arr[i][j] == 'B') {
				dfs(j, i, 3);
				count1++;
			}
		}
	}

	cout << count << " " << count1 << endl;
	return 0;
}
void input() {
	cin >> length;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cin >> arr[i][j];
			arr1[i][j] = arr[i][j];
		}
	}

}
void init() {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			visit[i][j] = 0;
			if (arr1[i][j] == 'R')
				arr[i][j] = 'G';
			else
				arr[i][j] = arr1[i][j];
		}
	}
}
void dfs(int x, int y, int color) {
	if (x < 0 || y < 0 || x >= length || y >= length)
		return;
	arr[y][x] = 'A';
	visit[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int tmpx = x + dirX[i];
		int tmpy = y + dirY[i];
		if (color == 1 && !visit[tmpy][tmpx] && arr[tmpy][tmpx] == 'R') {
			dfs(tmpx, tmpy, color);
		}
		if (color == 2 && !visit[tmpy][tmpx] && arr[tmpy][tmpx] == 'G') {
			dfs(tmpx, tmpy, color);
		}
		if (color == 3 && !visit[tmpy][tmpx] && arr[tmpy][tmpx] == 'B') {
			dfs(tmpx, tmpy, color);
		}
	}
}