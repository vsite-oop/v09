#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int len) {
		for (int i = 0; i < len; i++) {
			v.push_back(i * i);
		}
	}
	void remove_element(std::vector<int>& v, int n) {
		v.erase(v.begin() + n);
	}
	void input_element(std::vector<std::string>& s, int n, std::string str) {
		s.insert(s.begin() + n, str);
	}
	int list_nth_element(std::list<int>& l, int n) {
		std::list<int>::iterator i= l.begin();
		std::advance(i, n);
		return *i;
	}
	void list_sort_desc(std::list<int>& l) {
		l.sort(std::greater<int>());
	}
	unsigned int unique_numbers(std::istream& is) {
		std::unordered_set<int> nums;
		int v;
		while (is >> v) {
			nums.insert(v);
		}
		return nums.size();
	}
	
	word_frequency::word_frequency(std::stringstream& s){
		std::string word;
		while (s >> word) {
			for (char& c : word) {
				c=std::tolower(c);
			}
			map[word]++;
		}
	}

	unsigned int word_frequency::count() const{
		return map.size();
	}

	unsigned int word_frequency::frequency(std::string s) const {
		auto it = map.find(s);
		return (it!=map.end()) ? it->second : 0;
	}
}