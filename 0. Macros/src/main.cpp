#include <iostream>

using namespace std;

#define SQUARE(a) a*a

int main() {
	int result {0};
	result = SQUARE(5);
	cout << result << endl;
	result = 5 * 5;
	cout << result << endl;

	result = 100 / SQUARE(5);
	cout << result << endl;
	result = 100 / 5 * 5;
	cout << result << endl;

	return 0;
}