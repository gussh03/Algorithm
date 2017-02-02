#include<iostream>
using namespace std;
int L, C;
char arr[16];
void input() {
	cin >> L >> C;
	for (int i = 0; i < C; i++) cin >> arr[i];
}

int main() {
	input();
	return 0;
}