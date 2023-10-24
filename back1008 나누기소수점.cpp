#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	double a;
	double b;

	cin >> a >> b;

	cout.precision(12);
	cout << fixed;
	cout << a / b;

	return 0;

}