#include <iostream>
#include <string>

template<typename T, size_t N>
class Array {
	size_t size = N;
	T values[N];

	friend std::ostream &operator<<(std::ostream &os, const Array<T,N> &arr) {
		os << "[";
		for (const auto &val : arr.values)
			os << val << " ";
		os << "]" << std::endl;
		return os;
	}
	
public:
	Array() = default;
	Array(T init_val) {
		for (auto &items : values)
			items = init_val;		
	}

	void fill(T val) {
		for (auto &items : values)
			items = val;
	}

	size_t get_size() const {
		return size;
	}

	T &operator [](int index) {
		return values[index];
	}
};

int main() {
	Array<int, 5>nums;
	std::cout << "The size of nums is: " << nums.get_size() << std::endl;
	std::cout << nums << std::endl;

	nums.fill(0);
	std::cout << "The size of nums is: " << nums.get_size() << std::endl;
	std::cout << nums << std::endl;

	nums.fill(10);	
	std::cout << nums << std::endl;

	nums[0] = 1000;
	nums[3] = 2000;

	std::cout << nums << std::endl;

	Array<int, 100>nums2 {1};
	std::cout << "The size of nums is: " << nums2.get_size() << std::endl;
	std::cout << nums2 << std::endl;

	Array<std::string, 4> strings(std::string {"0xC0FFEE..."});
	std::cout << "The size of strings is: " << strings.get_size() << std::endl;
	std::cout << strings << std::endl;

	strings[0] = "FATE";
	std::cout << strings << std::endl;

	return 0;
}