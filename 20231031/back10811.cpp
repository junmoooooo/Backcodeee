#include <iostream>

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

        while (a < b) {
            swap(arr[a - 1], arr[b - 1]);
            a++;
            b--;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i];
        if (i < N - 1) {
            cout << " "; 
        }
    }
    return 0;
}