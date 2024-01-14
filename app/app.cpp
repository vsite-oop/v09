#include "app.h"
#include <list>
#include <algorithm>
#include <sstream>
#include <unordered_map>
namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int size) {
		for (int i = 0; i < size; i++) {
			v.push_back(i * i);
		}


	}
	void remove_element(std::vector<int>& v, int pos) {
		v.erase(v.begin() + pos);

	}

	void input_element(std::vector<std::string>& v, int  pos, std::string el) {
		v.insert(v.begin() + pos, el);

	}

	int list_nth_element(std::list<int>& l, int pos) {

		auto it = l.begin();

		std::advance(it, pos);

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
	
	
	word_frequency::word_frequency(std::istream& ss) {
		std::string word;
		while (ss >> word) {
			std::transform(word.begin(), word.end(), word.begin(), ::tolower);
			if (!word.empty()) {
				wordCounts[word]++;
			}
		}
	}

	unsigned word_frequency::count() const {
		return wordCounts.size();
	}

	unsigned word_frequency::frequency(const std::string& word) const {
		auto it = wordCounts.find(word);
		return (it != wordCounts.end()) ? it->second : 0;
	}

}