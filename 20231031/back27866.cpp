#include <iostream>

using namespace std;

int main() {

	int number;                  // 숫자
	string s;                    // 문자

	cin >> s;
    cin >> number;         // 문자와 정수를 입력

	cout << s[number - 1];      // 출력인데... 배열은  0부터 시작하니까..
                                //S[문자열은 이렇게 나눌수도 있구나...]
	return 0;
}
