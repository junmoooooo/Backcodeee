#include <iostream>

using namespace std;
int main() {

	int N[9];						 //�迭����

	for (int i = 0; i < 9; i++) {
		cin >> N[i];				//�迭 �Է�
	}
	
	int maxnum = -1;				//�ִ밪
	int maxi = 0;					//�ִ밪�� ���� 
	for (int i = 0; i < 9; i++) {
		if (N[i] > maxnum) {
			maxnum = N[i];
			maxi = i+1;
		}

	}

	cout << maxnum << "\n";
	cout << maxi;

}