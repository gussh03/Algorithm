#include<iostream>
#include<vector>
using namespace std;

int N, S, x;

void input() {
	cin >> N >> S;
	vector<vector<int> > vec(N);
	vector<vector<int>>::iterator iter;
	vector<vector<int>>::iterator iter1;

	for (int i = 0; i < N; i++) {
		cin >> x;
		vec[i].push_back(x);
	}


}

int main() {
	input();

	return 0;
}