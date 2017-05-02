#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string str;
char ch, res;
int alphabat[26], maxI, len, maxAlpha;
bool yes = true;
void input() {
	cin >> str;
	len = str.length();
	for (int i = 0; i < len; i++) {
		ch = str[i];
		if (ch <= 'z' && ch >= 'a') {
			ch = ch - ('z'-'Z');
		}
		alphabat[ch - 'A']++;
	}
}

int main() {
	input();
	maxI = alphabat[0];
	for (int i = 1; i < 26; i++) {
		if (maxI < alphabat[i]) {
			maxI = alphabat[i];
			maxAlpha = i;
			yes = true;
		}
		else if (alphabat[i] == maxI) {
			yes = false;
		}
	}


	if (!yes) {
		cout << "?" << endl;
	}
	else {
		cout << (char)(maxAlpha + 'A') << endl;
	}
	
	return 0;
}