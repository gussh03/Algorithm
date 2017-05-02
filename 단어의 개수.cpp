#include<iostream>
#include<string>
using namespace std;
string str;
int main() {
	int count = 0, size = 0;
	getline(cin, str);
	size = str.size();
	str.at(0) == 32 ? count = 0 : count = 1;
	for (int i = 0; i < size; i++) {
		if (str.at(i) == 32 && (i + 1) != size) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}