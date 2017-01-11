#include<iostream>
using namespace std;

int main() {

	int arr[3];
	char ch;
	
	for (int i = 0; i < 3; i++) cin >> arr[i];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < i; j++) 
			if (arr[i] < arr[j])
				swap(arr[i], arr[j]);
		

	for (int i = 0; i < 3; i++) {
		cin >> ch;

		int num = ch - (int)'A';
		cout << arr[num]<<" ";
	}
	cout << endl;

	return 0;
}