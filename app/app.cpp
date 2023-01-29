#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int size) {
		for (int i = 0; i < size; i++) {
			v.push_back(i * i);
		}


	}
	void remove_element(std::vector<int>& v, int position) {
		v.erase(v.begin() + position);

	}

	void input_element(std::vector<std::string>& v, int  position, std::string element) {
		v.insert(v.begin() + position, element);

	}

	int list_nth_element(std::list<int>& l, int position) {

		auto it = l.begin();

		std::advance(it, position);

		return *it;

	}


	void list_sort_desc(std::list<int>& l) {
		l.sort(); l.reverse();
	}

	unsigned int unique_numbers(std::stringstream& ss) {
		std::set<int> s{};
		int a;
		while (ss >> a) {
			s.insert(a);
		}
		return s.size();
	}

	word_frequency::word_frequency(std::stringstream& ss) {
		std::string str;
		while (ss >> str) {

			str[0] = tolower(str[0]);
			insert(str);
		}
	}

	void word_frequency::insert(const std::string& str) {
		++m[str];
	}

	unsigned int word_frequency::count()const {
		return m.size();
	}

	unsigned int word_frequency::frequency(std::string str)const {
		auto it = m.find(str);
		return it != m.end() ? it->second : 0;
	}

}