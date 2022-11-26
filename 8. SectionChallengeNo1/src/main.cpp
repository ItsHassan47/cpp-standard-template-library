// Use deque to check is string is palindrome or not

#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
#include <iomanip>

//void helperFunction(string &s) {
//	transform(s.begin(), s.end(), s.begin(), ::toupper);
//	s.erase(std::remove_if(s.begin(), s.end(),
//		[](char c) { return std::isspace(c) || !std::isalpha(c); }),
//		s.end());
//}

bool isPalindrome(const std::string &s) {
	std::deque<char> d;
	for (const char &c : s)
		if (isalpha(c))
			d.push_back(toupper(c));

	char c1 {};
	char c2 {};

	while (d.size() > 1) {
		c1 = d.front();
		c2 = d.back();
		if (c1 != c2)
			return false;
		d.pop_back();
		d.pop_front();
	}
	return true;
}

int main()
{
	std::vector<std::string> test_strings {"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
		"avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
		"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome"};

	std::cout << std::boolalpha;
	std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
	for (const auto &s : test_strings)
		std::cout << std::setw(8) << std::left << isPalindrome(s) << s << std::endl;

	std::cout << std::endl;
	return 0;
}