#include<iostream>
using namespace std;

int main() {

	int Multy, res = 0;
	cin >> Multy;
	int *arr = new int[Multy];
	for (int i = 0; i < Multy; i++) 
	{
		cin >> arr[i];
		res += arr[i];
	}

	cout << res - (Multy - 1) << endl;


	return 0;
}