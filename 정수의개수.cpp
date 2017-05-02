#include<iostream>
#include<string>
using namespace std;
string str;
int countNum = 1;
int main() {
	cin >> str;
	int size = str.size();
	for (int i = 0; i < size; i++) {
		if (str.at(i) == ',')
			countNum++;
	}
	cout << countNum;
	return 0;
}