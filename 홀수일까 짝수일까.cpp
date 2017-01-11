#include<iostream>
using namespace std;

int main() {

	char num[61];

	int N;
	cin >> N;
	
	int i = 0;

	while (i < N) {
		cin >> num[i];
		i++;
	}
	while(i < N) {
		if ((num[N - 1] % 2) == 1) {
			cout << "odd" << endl;
		}
		else
			cout << "even" << endl;

		i++;
	}

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;

	while (1) {
		cin >> str;



	}
}