#include<iostream>
using namespace std;
int numberOfCase(int west, int east);
int main() {
	int testCase, west, east;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> west >> east;
		cout << numberOfCase(west, east) << endl;
	}

	return 0;
}
int numberOfCase(int west, int east) {
	if (west == east) return 1;
	else if (west == 1) return east;
	else return numberOfCase(west - 1, east - 1) + numberOfCase(west, east - 1);
}