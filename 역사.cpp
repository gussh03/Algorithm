#include<iostream>
using namespace std;
int historyNum, pnNum, privious, nextTmp, arr[402][402], sNum;
void init() {
	for (int i = 0; i < 402; i++) {
		for (int j = 0; j < 402; j++) {
			arr[i][j] = 1000000;
		}
	}
}
void floyd() {
	for (int start = 1; start <= historyNum; start++)
		arr[start][start] = 0;
	for (int k = 1; k <= historyNum; k++) {
		for (int i = 1; i <= historyNum; i++) {
			for (int j = 1; j <= historyNum; j++) {
				if (arr[i][j] > arr[i][k] + arr[k][j])
					arr[i][j] = arr[i][k] + arr[k][j];
			}
		}
	}
}
int main() {
	int pri, ne;
	init();
	cin >> historyNum >> pnNum;
	for (int i = 0; i < pnNum; i++) {
		cin >> privious >> nextTmp;
		arr[privious][nextTmp] = 1;
	}
	floyd();
	cin >> sNum;
	for (int i = 0; i < sNum; i++) {
		cin >> pri >> ne;
		if (arr[pri][ne] != 1000000) cout << "-1" << endl;
		else if (arr[ne][pri] != 1000000) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}