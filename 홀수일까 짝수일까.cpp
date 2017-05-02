#include<iostream>
#include<string>
using namespace std;
int num;
string str;
int main() {
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		int len = str.length();
		str[len - 1] % 2 == 0 ? cout << "even" << endl : cout << "odd" << endl;
	}
	return 0;
}