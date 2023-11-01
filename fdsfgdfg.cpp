#include <iostream>

using namespace std;
int main () {

    int banana;
    int count;

	cin >> banana >> count;

    for (int i = 0; i < banana; i++){
        if (banana >= count) {
            cout << "uwow ~~~~uwow ~~~~uwow ~~~~";
            banana--;
        }else{
            cout << "배가고파 소리를 지를 수 없습니다";
        }

    }

    cout << "바나나를 count개 먹었습니다.";

    return 0;

}