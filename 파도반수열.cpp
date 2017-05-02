#include<iostream>
using namespace std;
unsigned long long int arr[101] = { 0,1,1,1,2,2, };
unsigned long long int dp(int num);
int main() {
	int testCase, num;
	cin >> testCase;
	
	for (int i = 0; i < testCase; i++) {
		cin >> num;
		cout << dp(num) << endl;
	}
	return 0;
}
unsigned long long int dp(int num) {
	if (num >= 1 && num <= 5)
		return arr[num];
	else {
		if(arr[num]==0)
			arr[num]= dp(num - 2) + dp(num - 3);
		return arr[num];
	}
}