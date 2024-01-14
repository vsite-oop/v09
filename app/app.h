#pragma once
#include <vector>
#include <string>
#include <list>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <set>
#include <map>
#include<sstream>
namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>& v, int size);
	void remove_element(std::vector<int>& v, int position);
	void input_element(std::vector<std::string>& v, int  position, std::string element);
	int list_nth_element(std::list<int>& l, int position);
	void list_sort_desc(std::list<int>& l);
	unsigned int unique_numbers(std::stringstream& ss);

	class word_frequency {
	public:
		std::unordered_map<std::string, unsigned> wordCounts;
		word_frequency(std::istream& ss);
		unsigned count() const;
		unsigned frequency(const std::string& word) const;
	};
}
