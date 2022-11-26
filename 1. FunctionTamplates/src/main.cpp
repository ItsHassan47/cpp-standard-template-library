#include <iostream>

template <typename T>
T min(T a, T b) {
	return (a > b) ? b : a;
}

template <typename T1, typename T2>
void func(T1 a, T2 b) {
	std::cout << a << " " << b << std::endl;
}

struct Player {
	std::string name;
	int xp;

	bool operator > (const Player &p) {
		return this->xp > p.xp;
	}
};

std::ostream &operator << (std::ostream &os, const Player &p) {
	os << p.xp;
	return os;
}

int main() {
	Player p1 {"AlphA", 19943};
	Player p2 {"0xC0FFEE", 15643};

	std::cout << min(p1, p2).xp << std::endl;

	std::cout << min<int>(10, 20) << std::endl;		// or
	std::cout << min(1.4, 6.7) << std::endl;
	std::cout << min('A', 'C') << std::endl;
	std::cout << min(5 + 2 * 2, 7 + 40) << std::endl;


	func("Hello,", "World!");
	func(p1, p2);

	return 0;
}