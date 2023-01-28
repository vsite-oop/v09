#pragma once
#include <vector>
#include <string>
#include <list>
#include <sstream>
#include <map>

namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>& v, int num);

	void remove_element(std::vector<int>& v, int position);

	void input_element(std::vector<std::string>& v, int position, std::string element);

	int list_nth_element(std::list<int>& l, int pos);

	void list_sort_desc(std::list<int>& l);

	unsigned int unique_numbers(std::istream& is);

	class word_frequency {
		std::map<std::string, unsigned int> map;

	public:
		word_frequency(std::istream& is);

		unsigned int count() const;
		unsigned int frequency(const std::string& s) const;
	};

}
