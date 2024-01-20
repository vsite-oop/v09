#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int size) {
		for (int i = 0; i < size; ++i) {
			v.push_back(i * i);
		}
	}
	void remove_element(std::vector<int>& v, int position) {
		v.erase(v.begin() + position);
	}
	void input_element(std::vector<std::string>& v, int position, std::string s) {
		v.insert(v.begin() + position, s);
	}
	int list_nth_element(std::list<int>& l, int position) {
		std::list<int>::iterator it = l.begin();
		std::advance(it, position);
		return *it;
	}
	void list_sort_desc(std::list<int>& l) {
		l.sort(std::greater<int>());
	}
	unsigned int unique_numbers(std::istream& is) {
		std::set<int> s;
		int number;
		while (is >> number) s.insert(number);
		return s.size();
	}
	word_frequency::word_frequency(std::istream& is) {
		std::string word;
		while (is >> word) {
			for (char& c : word) c = tolower(c);
			words[word]++;
		}
	}
	unsigned int word_frequency::count() const {
		return words.size();
	}
	unsigned int word_frequency::frequency(const std::string& word) const {
		auto it = words.find(word);
		return it != words.end() ? it->second : 0;
	}
}