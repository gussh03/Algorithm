#include<iostream>
using namespace std;
int num, stair[302];
void input() {
	cin >> num;
	for (int i = 0; i < num; i++) cin >> stair[i];
}
void dp() {
	int startNum = stair[num - 1];

}
int main() {
	input();
	dp();
	return 0;
}