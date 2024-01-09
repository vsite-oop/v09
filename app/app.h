#pragma once
#include <vector>
#include <list>
#include <sstream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <iostream>

namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>& v, int n);
	void remove_element(std::vector<int>& v, int n);
	void input_element(std::vector<std::string>& v, int n,const std::string& c);
	int list_nth_element(std::list<int>& c, int n);
	void list_sort_desc(std::list<int>& c);
	unsigned unique_numbers(std::stringstream& ss);
	class word_frequency {
	public:
		word_frequency(std::stringstream& ss);
		unsigned count() const;
		unsigned frequency(const std::string& word) const;
	};
}
