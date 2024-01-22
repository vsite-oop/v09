#include "app.h"


namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int n) {
		
		for (int i = 0; i < n; ++i) {
			v.push_back(i * i);
		}
	}

	void remove_element(std::vector<int>& v, int index) {
		v.erase(v.begin() + index);
	}

	void input_element(std::vector<std::string>& v, int index, const std::string& input) {
		v.insert(v.begin() + index, input);
	}

	int list_nth_element(std::list<int>& l, int index) {
		auto iter = l.begin();
		for (int i = 0; i < index; ++i, ++iter) {
		}
		return *iter;
	}

	void list_sort_desc(std::list<int>& l) {
		l.sort(std::greater<int>());
	}

	uint32_t unique_numbers(std::istream& is){
		int num;
		std::set<int> numbers;

		while (is >> num) {
			numbers.insert(num);
		}

		return numbers.size();
	}

	word_frequency::word_frequency(std::istream& is) {
		std::string word;
		while (is >> word) {
			for (char& letter : word) {
				letter = tolower(letter);
			}
			word_map[word]++;
		}
	}

	uint32_t word_frequency::count() const {
		return word_map.size();
	}

	uint32_t word_frequency::frequency(const std::string& s) const{
		auto iter = word_map.find(s);
		return iter != word_map.end() ? iter->second : 0;
	}
}