#include <iostream>
#include <vector>
using namespace std;
vector<int> solution(vector<vector<int> > v) {
	//vector<vector<int> >�� ���� ������ ���� �о�� �� �ֽ��ϴ�.
	cout << v[0][0] << " ";
	int x, y;
	for (int i = 0; i < 3; i++) {
		cin >> x >> y;
		v[0][i] = x;
		v[0][i] = y;
	}
	cout << v[0][0];
	vector<int> ans;
	return ans;
}
int main() {
	int x, y;



	return 0;
}