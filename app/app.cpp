#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int n) {
		for (int i = 0;i < n;++i) {
			v.push_back(i*i);
		}
	}

	void remove_element(std::vector<int>& v, int n) {
		v.erase(v.begin() + n);
	}

	void input_element(std::vector<std::string>& v, int n, const std::string& c) {
		v.insert(v.begin() + n, c);
	}

	int list_nth_element(std::list<int>& c, int n) {
		auto it = std::begin(c);
		std::advance(it, n);
		return *it;
	}

	void list_sort_desc(std::list<int>& c) {
		for (auto it1 = std::begin(c); it1 != std::end(c); ++it1) {
			for (auto it2 = std::next(it1); it2 != std::end(c); ++it2) {
				if (*it1 < *it2) {
					std::swap(*it1, *it2);
				}
			}
		}
	}

	unsigned unique_numbers(std::stringstream& ss) {
		std::unordered_set<unsigned> uniqueValues;
		unsigned number;

		while (ss >> number) {
			uniqueValues.insert(number);
		}

		return static_cast<unsigned>(uniqueValues.size());
	}

	std::unordered_map<std::string, unsigned> wordCounts;
	word_frequency::word_frequency(std::stringstream& ss) {
		std::string word;
		while (ss >> word) {
			std::transform(word.begin(), word.end(), word.begin(), ::tolower);
			if (!word.empty()) {
				wordCounts[word]++;
			}
		}
	}
		

	unsigned word_frequency::count() const {
		return static_cast<unsigned>(wordCounts.size());
	}

	unsigned word_frequency::frequency(const std::string& word) const {
		auto it = wordCounts.find(word);
		return (it != wordCounts.end()) ? it->second : 0;
	}

}