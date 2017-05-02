#include<iostream>
using namespace std;
int computerNum, connectedNum, num1, num2, arr[102][102];
void input() {
	cin >> computerNum >> connectedNum;
	for (int i = 0; i < connectedNum; i++) {
		cin >> num1 >> num2;
		arr[num1][num2] = arr[num2][num1] = 1;
	}
}
int floyd() {
	int res = 0;
	for (int i = 1; i <= computerNum; i++) {
		for (int start = 1; start <= computerNum; start++) {
			for (int end = 1; end <= computerNum; end++) {
				if (arr[start][i] + arr[i][end] > 1) arr[start][end] = 1;
			}
		}
	}
	for (int i = 2; i <= computerNum; i++)
		if (arr[1][i] == 1)
			res++;
	return res;
}
int main() {
	input();
	cout << floyd() << endl;
	return 0;
}