#include<iostream>
#include<string>
int i, res = 10; std::string str;
int main() {
	std::cin >> str;
	for (int i = 1; i < str.length(); i++) str[i - 1] == str[i] ? res += 5 : res += 10;
	std::cout << res << std::endl;
}