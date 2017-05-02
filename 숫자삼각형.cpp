//#include<iostream>
//#include<algorithm>
//using namespace std;
//int n, arr[503][503];
//void input() {
//	cin >> n;
//	for (int i = 0; i < n; i++) 
//		for (int j = 0; j < (i + 1); j++)
//			cin >> arr[i][j];
//}
//int main() {
//	input();
//	for (int i = (n - 1); i > 0; i--) {
//		for (int j = 0; j <= i; j++) {
//			arr[i - 1][j] += max(arr[i][j], arr[i][j + 1]);
//		}
//	}
//	cout << arr[0][0] << endl;
//	return 0;
//}

#include<iostream>
#include<algorithm>
#include<memory.h>
using namespace std;
int n, arr[503][503], cache[503][503];
void input() {
	cin >> n;
	memset(cache, -1, sizeof(cache));
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < (i + 1); j++)
			cin >> arr[i][j];
}
int dp(int x, int y) {
	if (y == n - 1) return arr[y][x];
	int c = cache[y][x];
	if (c != -1)return c;
	c = arr[y][x] + max(dp(x, y + 1), dp(x + 1, y + 1));
	return c;
}
int main() {
	input();
	cout << dp(0, 0) << endl;
	return 0;
}