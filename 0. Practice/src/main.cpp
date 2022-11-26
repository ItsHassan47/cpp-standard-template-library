#include <iostream>
#include <chrono>

using namespace std;

int sum1(int n) {
	int final_sum = 0;
	for (int i = 0; i < n + 1; ++i)
		final_sum += i;
	return final_sum;
}

int sum2(int n) {
	return (n * (n + 1) / 2);
}

int main() {
	auto start = chrono::steady_clock::now();
	cout << sum1(10) << endl;
	auto end = chrono::steady_clock::now();
	auto diff = end - start;
	cout << diff << endl;

	auto start1 = chrono::steady_clock::now();
	cout << sum2(10) << endl;
	auto end1 = chrono::steady_clock::now();
	auto diff1 = end1 - start1;
	cout << diff1 << endl;

	return 0;
}