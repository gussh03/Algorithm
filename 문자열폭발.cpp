#include<iostream>
#include<string>
using namespace std;
string str, rStr,tmp;
int main() {
	cin >> str >> rStr;
	int rSize = rStr.length();
	while (str.find(rSize) != string::npos) {
		int num = str.find(rStr);
		str.erase(num, rSize);
	}
	cout << str << endl;
	return 0;
}