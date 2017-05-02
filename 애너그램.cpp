//#include<iostream>
//#include<string>
//using namespace std;
//int check(string left, string right);
//int main() {
//	int testCase;
//	string left, right;
//	cin >> testCase;
//	for (int i = 0; i < testCase; i++) {
//		cin >> left >> right;
//		int res = check(left, right);
//		if (res == 1)
//			cout << left << " & " << right << " are anagrams." << endl;
//		else
//			cout << left << " & " << right << " are anagrams." << endl;
//	}	
//	return 0;
//}
//int check(string left, string right) {
//	int alpha[26] = { 0, }, alpha2[26] = { 0, }, res = 1;
//	for (int i = 0, j = 0; i < left.length(), j <  right.length(); i++, j++) {
//		alpha[left[i] - 'a']++; alpha2[right[j] - 'a']++;
//	}
//	for (int i = 0; i < 26; i++) {
//		if (alpha[i] != alpha2[i]) res = 0;
//	}
//	return res;
//}

//#include<iostream>
//using namespace std;
//
//float precision() {
//	float one = 1.0f, e = 1.0f, oneplus;
//	int counter = 0;
//	do {
//		counter = counter + 1;
//		e = e / 2.0f;
//		oneplus = one + e;
//	} while (oneplus != one);
//
//	return e;
//}
//
//int main() {
//	cout << "float resolution = " << precision() << endl;
//	return 0;
//}

#include<iostream>
using namespace std;
float machine() {
	float x1 = 10001.0, x2 = 0.0001;
	for (int i = 1; i <= 10001; i++) {
		x1 += x2;
	}
	return x1;
}
int main() {
	cout << machine() << endl;

	return 0;
}