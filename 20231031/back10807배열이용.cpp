#include <iostream>

using namespace std;

int main() {
    int n, f, a[100];               //�򿭼��� 
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];                //�迭 ������� �Է¹���
    }
    cin >> f;
    for (int i = 0; i < n; i++)
    {
        if (f == a[i])
            cnt++;
    }
    cout << cnt;
}