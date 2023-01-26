#pragma once

#include <vector>
#include <string>
#include <list>

namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>&, int);

	void remove_element(std::vector<int>&, int);

	void input_element(std::vector<std::string>&, int, std::string);

	int list_nth_element(std::list<int>&, int);

	void list_sort_desc(std::list<int>&);

	unsigned unique_numbers(std::istream&);


	class word_frequency {  // TODO
	public:
		word_frequency(std::istream&);
		unsigned count();
		unsigned frequency(std::string);
	};;
}
