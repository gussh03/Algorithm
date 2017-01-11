#include<iostream>
using namespace std;

int main() {

	int N, i = 0;
	unsigned long long tmp = 0; //클러스터 개수
	unsigned long long size[50] = { NULL };
	unsigned long long cl = NULL;

	cin >> N;
	for (i; i < N; i++) cin >> size[i];
	cin >> cl;

	i = 0;

	while (N > 0) {
		if (size[i] > cl) tmp += 2;
		else tmp += 1;

		i++;
		N--;

	}

	cout << cl * tmp << endl;

	return 0;
}


//#include<iostream>
//using namespace std;
//
//int main() {
//	int arr[50][50];
//
//	int Num , tmp = 0;
//	cin >> Num;
//	tmp = Num;
//	int y = 0, x = -1, direct = 1;
//	int plus = 1;
//	while (tmp != 0) {
//		for (int i = 0; i < tmp; i++) {
//			arr[y][x] = plus;
//			plus++;
//		}
//
//	
//
//	}
//
//	return 0;
//}