#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
	int range[9] = { 0 }, num = 0, resNum = 0; char set[1000001];
	cin >> set;
	num = strlen(set);
	for (int i = 0; i < num; i++) { set[i] == '9' ? range[6]++ : range[set[i] - 48]++; }
	range[6] = range[6] / 2 + range[6] % 2;
	for (int i = 0; i < 9; i++) resNum = max(resNum, range[i]);
	cout << resNum << endl;
	return 0;
}