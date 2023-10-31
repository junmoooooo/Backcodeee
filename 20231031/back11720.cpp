#include <iostream>

using namespace std;
int main () {
    /*
    int N;
    int number[101];

    cin >> N;

    for (int i =0; i < N; i++){
        cin >> number[i];
    }

    int sum = 0;

    for (int i =0; i < N; i++) {
        sum += number[i];
    }

    cout << sum;

    return 0;
    */   //숫자가 공백없이 입력을 해야된다...

    int N;
    char number[101];
    
    cin >> N;

    int sum = 0;
    cin >> number;
    for (int i = 0; i < N; i++){

        
        sum += number[i]- '0';              // 0을 뺄때 숫자를 뺴는게 아니고 문자로 뻰다? ㅇ 48을 빼던가
    }

    cout << sum;

}