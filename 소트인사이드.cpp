#include<iostream>
#include<queue>
using namespace std;
int num;
priority_queue<int> pq;
int main() {
	cin >> num;
	while (!(num >= 0 && num <= 9)) {
		pq.push(num % 10);
		num /= 10;
	}
	pq.push(num);
	while (!pq.empty()) {
		cout << pq.top();
		pq.pop();
	}
	cout << endl;
	return 0;
}