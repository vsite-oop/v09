#include "app.h"
#include <unordered_set>
#include <set>

namespace vsite::oop::v9
{

	void fill_vector(std::vector<int>& v, int num) {
		for (int i = 0; i < num; i++)
		{
			v.push_back(i * i);
		}
	}

	void remove_element(std::vector<int>& v, int position) {
		v.erase(v.begin() + position);
	}

	void input_element(std::vector<std::string>& v, int position, std::string element) {
		v.insert(v.begin() + position, element);
	}

	int list_nth_element(std::list<int>& l, int pos) {
		if (l.size() > pos)
		{
			std::list<int>::iterator it = l.begin();
			for (int i = 0; i < pos; ++i)
				++it;
			return *it;
		}
	}

	void list_sort_desc(std::list<int>& l) {
		l.sort(std::greater<>());
	};

	unsigned int unique_numbers(std::istream& is) {
		std::set<int> set{};
		int num;

		while (is >> num)
			set.insert(num);

		return set.size();
	}

	word_frequency::word_frequency(std::istream& is) {
		std::string word;

		while (is >> word) {
			word[0] = tolower(word[0]);
			map[word]++;
		}
	}

	unsigned int word_frequency::count() const { return map.size(); }

	unsigned int word_frequency::frequency(const std::string& s) const {
		auto it = map.find(s);
		if (it != map.end()) {
			return it->second;
		}
		return 0;
	}
}