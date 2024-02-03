#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int n) {
		for (int i = 0; i < n; ++i) {
			v.push_back(i * i);
		}
	}

	void remove_element(std::vector<int>& v, int n) {
		v.erase(v.begin() + n);
	}

	void input_element(std::vector<std::string>& v, int n, const std::string& c) {
		v.insert(v.begin() + n, c);
	}

	int list_nth_element(std::list<int>& l, int n) {
		auto iter = l.begin();
		for (int i = 0; i < n; ++iter, ++i) {}
		return *iter;
	}

	void list_sort_desc(std::list<int>& l) {
		l.sort(std::greater<int>());
	}

	uint32_t unique_numbers(std::istream& is) {
		int n;
		std::set<int> s;

		while (is >> n) {
			s.insert(n);
		}

		return s.size();
	}

	word_frequency::word_frequency(std::istream& is) {
		std::string word;
		while (is >> word) {
			word[0] = tolower(word[0]);
			word_map[word]++;
		}
	}

	uint32_t word_frequency::count() const {
		return word_map.size();
	}

	uint32_t word_frequency::frequency(const std::string& s) const {
		auto iter = word_map.find(s);
		return iter != word_map.end() ? iter->second : 0;
	}
}