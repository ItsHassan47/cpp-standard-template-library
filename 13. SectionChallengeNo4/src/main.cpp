// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

bool is_palindrome(const std::string &word)
{
	// Since we are learning the STL - use a stack and a queue to solve the problem.
	std::stack<char> s;		// LIFO
	std::queue<char> q;		// FIFO

	
	for (char c : word){
		if (isalpha(c)) {
			c = toupper(c);
			s.push(c);
			q.push(c);
		}
	}

	char c1 {};
	char c2 {};
	while (!s.empty()) {
		c1 = s.top();
		c2 = q.front();
		s.pop();
		q.pop();
		if (c1 != c2)
			return false;	
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
	for (const auto &s : test_strings) {
		std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
	}
	std::cout << std::endl;
	return 0;
}