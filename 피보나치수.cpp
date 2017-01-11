#include<iostream>
using namespace std;

int result(int N) {
	int res = 0;

	if (N == 0)
		return 0;
	else if (N == 1)
		return 1;
	else {
		res = result(N - 1) + result(N - 2);
		return res;
	}
}

int main() {

	int tmp, res = 0;
	cin >> tmp;


	for (int i = 1; i < tmp; i++) {
		res = result(tmp);
	}

	cout << res;
	return 0;
}

#include<iostream>
using namespace std;

int main() {

	int N = 0;

	int tmp = 0, cnt = 1, res = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		res = tmp + cnt;
		tmp =cnt;
		cnt = res;
	}

	cout << tmp << endl;
	return 0;
}

#include <stdio.h>
int fibo(int n) {
	int i, data[50] = { 0, 1, };
	for (i = 2; i <= n; i++)
		data[i] = data[i - 1] + data[i - 2];
	return data[n];
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", fibo(n));
}