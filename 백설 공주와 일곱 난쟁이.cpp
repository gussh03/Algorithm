#include<iostream>
using namespace std;
int main() {
	int arr[9], sum = 0, n1 = 0, n2 = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sum = sum - 100;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i] + arr[j] == sum) { n1 = i; n2 = j; }
		}
	}
	for (int i = 0; i < 9; i++) {
		if (i == n1 || i == n2)
			continue;
		cout << arr[i] << endl;
	}
	return 0;
}