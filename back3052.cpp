#include <iostream>
#include <set>


using namespace std;
int main() {

	int N[10];
	int a = 42;
	set<int> na;
	int count = 0;


	for (int i = 0; i < 10; i++) {
		cin >> N[i];

	}

	for (int i = 0; i < 10; i++) {

		na.insert(N[i] % a);

	}
	cout << na.size();

}

