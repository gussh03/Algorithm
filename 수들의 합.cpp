#include<iostream>
using namespace std;
unsigned long int num, i, sum;
int main() {
	cin >> num;
	while (1) {
		sum += i;
		if (sum > num) {
			i--;
			break;
		}
		i++;
	}
	cout << i << endl;
}