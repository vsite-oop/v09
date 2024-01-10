#pragma once
#include <vector>
#include <string>
#include <list>
#include <unordered_set>
#include <unordered_map>
namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>& v, int broj);
	void remove_element(std::vector<int>& v, int broj);
	void input_element(std::vector<std::string>& v, int pos, std::string s);
	int list_nth_element(std::list<int>& v, int pos);
	void list_sort_desc(std::list<int>& v);
	unsigned unique_numbers(std::istream& s);
	class word_frequency {
	private:
		std::unordered_map<std::string,int> words;
	public:
		word_frequency(std::istream& s);
		unsigned count();
		unsigned frequency(const std::string& s);
	};
}