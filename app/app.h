#pragma once

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <list>



namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& vec, int size);
	void remove_element(std::vector<int>& vec, int index);
	void input_element(std::vector<std::string>& vec, int index, std::string s);
	int list_nth_element(std::list<int>& lis, int index);
	void list_sort_desc(std::list<int>& lis);
	unsigned unique_numbers(std::istream& is);
	

	

	class word_frequency {

		std::map<std::string, unsigned> m;
		void insert(const std::string& s);

	public:

		word_frequency(std::istream& is);
		unsigned count()const;
		unsigned frequency(std::string s)const;

	};
}
