#include <iostream>

using namespace std;

int back2753(int argc, char const* argv[]) {
    int y;

    cin >> y;

    if (y % 4 == 0) {
        if (y % 400 == 0) {     // 4�� ����̸鼭 400�� ����� ��(=����)
            cout << 1;
        }
        else if (y % 100 != 0) {    // 4�� ����̸鼭 100�� ����� �ƴ� ��(=����) 
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    else {
        cout << 0;
    }

    return 0;
}