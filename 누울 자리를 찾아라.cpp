#include<iostream>
using namespace std;
void input();
int num, countTmp, location;
char arr[102][102], buffer[102][102];
void input();
void init();
int widthCheck();
int heightCheck();
void check(int x, int y, int loc);
int main() {
	input();
	init();
	cout << widthCheck() << " ";
	init();
	cout << heightCheck() << endl;
	return 0;
}
void init() {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			arr[i][j] = buffer[i][j];
		}
	}
}
void input() {
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cin >> buffer[i][j];
		}
	}
}
int widthCheck() {
	int width = 0;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (arr[i][j] == '.') {
				countTmp = 0;
				check(j, i, 1);
				if (countTmp >= 2)
					width++;
			}
		}
	}
	return width;
}
int heightCheck() {
	int height = 0;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (arr[j][i] == '.') {
				countTmp = 0;
				check(i, j, 2);
				if (countTmp >= 2)
					height++;
			}
		}
	}
	return height;
}
void check(int x, int y, int loc) {
	if (arr[y][x] == 'X' || arr[y][x] == '0' || x >= num || y >= num)
		return;
	arr[y][x] = '0';
	countTmp++;
	loc == 1 ? check(x + 1, y, loc) : check(x, y + 1, loc);
}