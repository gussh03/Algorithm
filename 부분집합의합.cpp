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
void powerSet(int now) { //���� ���� ��ġ : now
	if (now == N) { // ���� �� ��ġ�� ���������
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