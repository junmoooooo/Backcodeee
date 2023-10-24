#include <iostream>

using namespace std;

int main() {
    int n, f, a[100];               //뱌열선언 
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];                //배열 순서대로 입력받음
    }
    cin >> f;
    for (int i = 0; i < n; i++)
    {
        if (f == a[i])
            cnt++;
    }
    cout << cnt;
}