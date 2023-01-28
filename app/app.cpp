#include <set>
#include<sstream>

#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int i) {
		for (auto vi = 0; vi < i; ++vi)
			v.push_back(vi * vi);
	}

	void remove_element(std::vector<int>& v, int ep) {
		std::vector<int>::const_iterator where = (v.begin() + ep);
		v.erase(where);
	}

	void input_element(std::vector<std::string>& v, int p, const std::string val) {
		std::vector<std::string>::const_iterator where = (v.begin() + p);
		v.insert(where, val);
	}

	int list_nth_element(std::list<int> l, int i) {
		auto iter = l.begin();

		for (auto li = 0; li < i; ++li)
			++iter;

		return *iter;
	}

	void list_sort_desc(std::list<int>& l) {
		l.sort();
		l.reverse();
	}

	unsigned int unique_numbers(std::istream& is) {
		std::set<int> set{};
		int val;

		while (is >> val)
			set.insert(val);

		return set.size();
	}


	word_frequency::word_frequency(std::istream& is) {
		std::string word;

		while (is >> word) {
			word[0] = tolower(word[0]);
			++map[word];
		}
	}

	unsigned int word_frequency::count() const { return map.size(); }

	unsigned int word_frequency::frequency(const std::string& s) const {
		if (map.contains(s))
			return map.at(s);
		return 0;

	}
}