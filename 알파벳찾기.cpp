#include<iostream>
#include<string>
using namespace std;
int alpha[26];
string str;
int main() {
	cin >> str;
	int size = str.size(), num = 1;
	for (int i = 0; i < size; i++) {
		char ch = str.at(i);
		if (alpha[ch - 'a'] > 0) {
			num++;
			continue;
		}
		else {
			alpha[ch - 'a'] = num;
			num++;
		}
	}
	for (int i = 0; i < 26; i++) {
		alpha[i] == 0 ? cout << "-1 " : cout << alpha[i] - 1<< " ";
	}
	cout << endl;
	return 0;
}