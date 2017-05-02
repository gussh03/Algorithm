#include<iostream>
#include<string>
using namespace std;
int main() {
	string str, str2="";
	cin >> str;
	int size = str.size();
	int num = 1;
	for (int i = 0; i < size; i++) {
		str2 += str.at(i);
		if (num == 10) {
			cout << str2 << endl;
			num = 0;
			str2 = "";
		}
		num++;
	}
	cout << str2 << endl;
	return 0;
}