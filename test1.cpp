#include<iostream>
using namespace std;

int main() {
	int Num;

	cin >> Num;
	for (int i = 0; i < Num; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}

