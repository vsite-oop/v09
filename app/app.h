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
	void input_element(std::vector<std::string>& v, int  pos, const std::string el);
	int list_nth_element(std::list<int>& l, int pos);
	void list_sort_desc(std::list<int>& l);
	unsigned int unique_numbers(std::istream& ss);

	class word_frequency {

		std::map<std::string, unsigned> m;
		void insert(const std::string& s);

	public:

		word_frequency(std::istream& is);
		unsigned count()const;
		unsigned frequency(std::string s)const;

	};

}
