#pragma once
#include <vector>
#include <string>
#include <list>
namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>& v, int broj);
	void remove_element(std::vector<int>& v, int broj);
	void input_element(std::vector<std::string>& v, int pos, std::string s);
	int list_nth_element(std::list<int>& v, int pos);
	void list_sort_desc(std::list<int>& v);
	unsigned unique_numbers(std::stringstream& s);
	class word_frequency {
		std::stringstream& s1;
	public:
		word_frequency(std::stringstream& s) : s1(s) {};
		unsigned count();
		unsigned frequency(std::string s);
	};
}
