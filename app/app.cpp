#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int size) {
		for (int i = 0; i < size; ++i) {
			v.push_back(i * i);
		}
	}

	void remove_element(std::vector<int>& v, int index) {
		v.erase(v.begin() + index);
	}

	void input_element(std::vector<std::string>& v, int index, std::string value) {
		v.insert(v.begin() + index, value);
	}

	int list_nth_element(std::list<int> l, int n) {
		auto it = l.begin();
		for (int i = 0; i < n; ++i) {
			++it;
		}
		return *it;
	}

	void list_sort_desc(std::list<int>& l) {
		l.sort();
		l.reverse();
	}

	uint32_t unique_numbers(std::istream& ss) {
		std::set<int> x{};
		int a;
		while (ss){
			ss >> a;
			x.insert(a);
		}
		return x.size();
	}

	word_frequency::word_frequency(std::istream& ss) {
		std::string str;
		while (ss) {
			ss >> str;
			insert(str);
		}
	}

	void word_frequency::insert(const std::string str) {
		++m[str];
	}

	uint32_t word_frequency::count()const {
		return m.size();
	}

	uint32_t word_frequency::frequency(std::string str)const {
		return m.contains(str) ? m.at(str) : 0;
	}
}