#pragma once
#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <set>
#include <map>

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int size);

	void remove_element(std::vector<int>& v, int index);

	void input_element(std::vector<std::string>& v, int index, std::string value);

	int list_nth_element(std::list<int> l, int n);

	void list_sort_desc(std::list<int>& l);

	uint32_t unique_numbers(std::istream& ss);

	class word_frequency {
		std::map<std::string, uint32_t> m;
	public:
		word_frequency(std::istream& ss);
		void insert(const std::string& str);
		uint32_t count()const;
		uint32_t frequency(std::string str)const;
	};
}
