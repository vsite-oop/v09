#pragma once
#include <vector>
#include <string>
#include <list>
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

		std::map<std::string, unsigned int> m;
		void insert(const std::string& str);
	public:
		word_frequency(std::stringstream& ss);
		unsigned int count() const;
		unsigned int frequency(std::string str)const;
	};
}
