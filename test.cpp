//#include<iostream>
//#include<string>
//using namespace std;


//N(N<50)을 입력받은 후 N개의 알파벳이 입력됩니다.N개의 알파벳이 입력된 후 마지막에 입력된 알파벳이 총 몇번 입력이 되었는지
//	알려주는 프로그램을 작성하시오.
//
//	입력
//	10
//	aaabbaaccc
//	b
//
//	출력
//	2
//
//
//	입력
//	10
//	aaabbaaccc
//	a
//
//	출력
//	5

//int main() {
//
//	int NUM; //입력
//
//	int arr[26] = {0};
//	int res = 0;
//	cin >> NUM;
//
//
//
//	for (int i = 0; i < NUM; i++) {
//		cin >> arr[i];
//	}
//
//
//	int arr[26];
//	char tmp;
//	cin >> tmp
//		(a 입력)
//		arr[tmp - 'a']++;
//
//
//	cout << res << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//
//int main() {
//
//	int NUM; //입력
//	char test;
//	int res = 0;
//
//	cin >> NUM;
//
//	char *arr = new char[NUM];
//
//	for (int i = 0; i < NUM; i++) {
//		cin >> arr[i];
//	}
//
//	/*cin >> test;
//
//	for (int i = 0; i < NUM; i++) {
//		if (arr[i] == test)
//			res++;
//	}*/
//
//
//	cout << a << endl;
//
//
//
//	return 0;
//}

//#include<stdio.h>
//int alphabet[26];
//int main() {
//	char tmp;
//	int n;
//	scanf("%d", &n);
//
//	while (n--) {
//		scanf("%c", &tmp);
//		while (tmp == '\n')
//			scanf("%c", &tmp);
//		alphabet[tmp - 'a']++;
//	}
//
//	scanf("%c", &tmp);
//	
//	while (tmp == '\n')
//		scanf("%c", &tmp);
//	
//	printf("%d\n", alphabet[tmp - 'a']);//찾는 값 출력
//	return 0;
//}

