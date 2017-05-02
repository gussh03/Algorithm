#include<iostream>
using namespace std;
int main() {
	int student, number[102], res[102];
	cin >> student;
	for (int i = 1; i <= student; i++) { cin >> number[i]; res[i] = i; }
	for (int i = 1; i <= student; i++) 
		for (int j = i; j > i - number[i]; j--) 
			swap(res[j], res[j - 1]);

	for (int i = 1; i <= student; i++) cout << res[i] << " ";
	cout << endl;
	return 0;
}