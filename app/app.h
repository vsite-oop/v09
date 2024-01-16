#pragma once
#include<vector>
#include<string>
#include<list>
#include<map>
#include<unordered_set>
#include<sstream>

namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>& v, int n);
	void remove_element(std::vector<int>& v, int n);
	void input_element(std::vector<std::string>& s, int n, std::string str);
	int list_nth_element(std::list<int>& l, int n);
	void list_sort_desc(std::list<int>& l);
	unsigned int unique_numbers(std::istream& is);
	
	class word_frequency {
		std::map<std::string, unsigned int> map;
	public:
		word_frequency(std::stringstream& ss);
		unsigned int count() const;
		unsigned int frequency(std::string s) const;
	};


}
