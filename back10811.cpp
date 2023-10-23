#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int arr[101];
    int a, b;

    for (int i = 0; i < 101; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < M; i++) {
        cin >> a >> b;

        reverse(arr + a-1, arr + b-1);
        
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i];
    }
    return 0;
}