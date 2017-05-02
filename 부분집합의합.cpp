#include<iostream>
using namespace std;
int arr[22], N, S, result, sum = -1234567891234;
bool check[22];
void powerSet(int now);
int main() {
	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	powerSet(0);
	cout << result  << endl;
	return 0;
}
void powerSet(int now) { //현재 나의 위치 : now
	if (now == N) { // 현재 내 위치가 리프노드라면
		for (int i = 0; i < N; i++) {
			if (check[i])
				sum += arr[i];
		}
		if (sum == S)
			result++;
		sum = 0;
		return;
	}
	check[now] = false;
	powerSet(now + 1);
	check[now] = true;
	powerSet(now + 1);
}