//#include<iostream>
//using namespace std;
////규칙 잘 파악하기 ! 나중에 다시 보쟈
//int dp(int num) {
//	int countNum = 0;
//	for (int start = 2; start <= num; start++) {
//		if (start * start > num) break;
//		countNum++;
//	}
//	return countNum;
//}
//int main() {
//	int testCase, roomNum, arr[102]; 
//	cin >> testCase;
//	for (int i = 0; i < testCase; i++) {
//		cin >> roomNum;
//		cout << dp(roomNum)+1 << endl;
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
int main() {
	int testCase, roomNum, runawayNum;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> roomNum;
		runawayNum = 0;
		for (int start = 1; start*start <= roomNum; start++) {
			runawayNum++; 
		}
		cout << runawayNum  << endl;
	}
}