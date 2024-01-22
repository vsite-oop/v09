#pragma once
#include <vector>
#include <string>
#include <list>
#include <set>
#include <iostream>
#include <map>

namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>& v, int n);

	void remove_element(std::vector<int>& v, int index);

	void input_element(std::vector<std::string>& v, int index, const std::string& input);

	int list_nth_element(std::list<int>& l, int index);

	void list_sort_desc(std::list<int>& l);

	uint32_t unique_numbers(std::istream& is);

	class word_frequency {
		std::map<std::string, int> word_map;
	public:
		word_frequency(std::istream& is);
		uint32_t count() const;
		uint32_t frequency(const std::string& s) const;
	};
}
