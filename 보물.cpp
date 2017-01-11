#include<iostream>
using namespace std;

int main() {

	int Num, result = 0;

	cin >> Num;

	int *a = new int[Num];
	int *b = new int[Num];
	int *c = new int[Num];

	

	for (int i = 0; i < Num; i++) cin >> a[i];
	for (int j = 0; j < Num; j++) cin >> b[j];

	for (int i = 0; i <= Num; i++)
		c[i] = b[i];

	for (int i = 0; i < Num; i++)
		for (int j = 0; j < Num; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);


	for (int i = 0; i < Num; i++)
		for (int j = 0; j < Num; j++)
			if (c[i] <= c[j])
				swap(c[i], c[j]);


	for (int i = 0; i < Num; i++)
		result += (a[i] * c[i]);

	cout << result << endl;

	return 0;
}