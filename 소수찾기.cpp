#include<iostream>
using namespace std;

int main() {

	int N, prime = 0;
	cin >> N;

	int *p = new int[N]; 

	for (int i = 0; i < N; i++) {
		cin >> p[i];
	}
	
	for (int i = 0; i < N; i++) {
		if (p[i] == 2) {prime++;}
		else if (p[i] == 1) { }
		else {
			for (int x = 2; x < p[i]; x++) {
				if ((p[i] % x) != 0);
				else {
					prime--;
					break;
				}
			}
			prime++;

		
		}
	}

	cout << prime << endl;

	return 0;
}