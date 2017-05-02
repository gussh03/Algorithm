#include<iostream>
using namespace std;

unsigned long long int fileNum, fileSize[1001], Cluster, countNum,i;
int main() {

	cin >> fileNum;
	for (i = 0; i < fileNum; i++) {
		cin >> fileSize[i];
	}
	cin >> Cluster;
	while (i > 0) {
		i--;
		countNum += fileSize[i] / Cluster;
		if (fileSize[i] % Cluster > 0)
			countNum++;
	}

	cout << Cluster * countNum << endl;
	return 0;
}