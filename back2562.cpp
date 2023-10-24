#include <iostream>

using namespace std;
int main() {

	int N[9];						 //배열선언

	for (int i = 0; i < 9; i++) {
		cin >> N[i];				//배열 입력
	}
	
	int maxnum = -1;				//최대값
	int maxi = 0;					//최대값의 번쨰 
	for (int i = 0; i < 9; i++) {
		if (N[i] > maxnum) {
			maxnum = N[i];
			maxi = i+1;
		}

	}

	cout << maxnum << "\n";
	cout << maxi;

}