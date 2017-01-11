#include<iostream>
using namespace std;

int main() {

	int Num, a = 1, sum = 0, r1 = 0, r2 = 1, res = 0;
	cin >> Num;

	while (1) {
		sum += a;
	
		if (sum >= Num) 
			break;
		
		a++;
		
	}

	for (int i = 1; i < a; i++) {
		res += i;
	}

	r1 = Num - res ;
	r2 = (a + 1) - r1;
	

	if (a % 2 == 0)
		cout << r1 << "/" << r2 << endl;
	else
		cout << r2 << "/" << r1 << endl;

	return 0;
}