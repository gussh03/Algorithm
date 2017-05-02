#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int disNum[102], number;
string str1, str2;
void res(string s1, string s2);
int main() {
	int n = 0;
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> str1 >> str2;
		res(str1, str2);
		cout << "Distances: ";
		for (int i = 0; i < str1.size(); i++) {
			cout << disNum[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
void res(string s1, string s2) {
	char x, y;
	int size = s1.size();
	for (int i = 0; i < size; i++) {
		x = s1.at(i);
		y = s2.at(i);
		x <= y ? disNum[i] = (int)(y - x) : disNum[i] = (int)((y + 26) - x);
	}
}