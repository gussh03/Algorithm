#include<iostream>
using namespace std;
int studentNum, comparedNum, arr[502][502], shortPerson, tallPerson;
void init() {
	for (int i = 1; i <= studentNum; i++) {
		for (int j = 1; j <= studentNum; j++) {
			if (i == j) arr[i][j] = 0;
			else if (arr[i][j] == 0) arr[i][j] = 1000000;
		}
	}
}
void input() {
	cin >> studentNum >> comparedNum;
	for (int i = 0; i < comparedNum; i++) {
		cin >> shortPerson >> tallPerson;
		arr[shortPerson][tallPerson] = 1;
	}
}
void floyd() {
	init();
	for (int s = 1; s <= studentNum; s++) {
		for (int start = 1; start <= studentNum; start++) {
			for (int end = 1; end <= studentNum; end++) {
				if (arr[start][end] > arr[start][s] + arr[s][end])
					arr[start][end] = arr[start][s] + arr[s][end];
			}
		}
	}
}
void print() {
	for (int i = 1; i <= studentNum; i++) {
		for (int j = 1; j <= studentNum; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void result() {
	int res = 0, num = 0;
	for (int i = 1; i <= studentNum; i++) {
		for (int j = 1; j <= studentNum; j++) {
			
		}
	}
	
}
int main() {
	input();
	print();
	cout << endl;
	floyd();
	print();
	return 0;
}