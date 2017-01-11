#include<iostream>
using namespace std;

int main() {
	int y = 0,x = 0;
	int arr[5][5];

	for (y; y < 5; y++) 
	{
		for (x; x < 5; x++) arr[y][x] = (x + 1);
		
		for (y ; y < 5; y++) arr[y][x] = (y + 1);

	}



	for (y; y < 5; y++) 
	{
		for (x; x < 5; x++) 
		{
			cout <<"  "<<arr[y][x];
		}
		cout << endl;
	}
	return 0;
}