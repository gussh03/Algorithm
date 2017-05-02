//#include<iostream>
//using namespace std;
//int main() {
//	int hansue;
//	cin >> hansue;
//	int result = 0;
//	if (hansue <= 99) {
//		cout << hansue << endl;
//	}else{
//		for (int start = 100; start <= hansue; start++) {
//			int arr[4] = { 0, };
//			int tmp = start;
//			if (start == 1000) break;
//			else {
//				for (int j = 0; tmp; j++) {
//					arr[j] = tmp % 10;
//					tmp /= 10;
//				}
//				if (arr[0] - arr[1] == arr[1] - arr[2]) result++;
//			}
//		}
//		cout << result + 99 << endl;
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
int hansueFun(int han) {
	int result = 0;
	for (int start = 100; start <= han; start++) {
		int arr[4] = { 0, };
		int tmp = start;
		if (start == 1000)break;
		for (int j = 0; j < 4; j++) {
			arr[j] = tmp % 10;
			tmp /= 10;
		}
		if (arr[0] - arr[1] == arr[1] - arr[2]) result++;
	}
	return result;
}
int main() {
	int hansue;
	cin >> hansue;
	if (hansue <= 99) { cout << hansue << endl; }
	else { cout << hansueFun(hansue) + 99 << endl; }
	return 0;
}