//#include<iostream>
//using namespace std;
//
//int a, b, c, res;
//int arr[10];
//
//void input() {
//	cin >> a >> b >> c;
//	res = a * b * c;
//}
//
//void result() {
//	int share = 0, rest = 0; //¸ò, ³ª¸ÓÁö
//	for (int i = 0; i < 9; i++) {
//		share = res / 10;
//		rest = res % 10;
//		res = share;
//		arr[rest]++;
//		if (share >= 0 && share < 10) {
//			rest = share % 10;
//			arr[rest]++;
//			break;
//		}
//
//	}
//}
//
//void print() {
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << endl;
//	}
//}
//int main() {
//	input();
//	result();
//	print();
//
//	return 0;
//}


#include<iostream>
using namespace std;

int main() {
	int a, b, c, product, cnt, number[10] = { 0 };
	cin >> a >> b >> c;
	product = a * b * c;
	while (product > 0) {
		number[product % 10]++;
		product /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << number[i] << endl;
	}
	return 0;
}