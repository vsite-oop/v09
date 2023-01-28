#pragma once

#include <vector>
#include <list>
#include<map>

#include<string>

namespace vsite::oop::v9 
{
	void fill_vector(std::vector<int>& v, int i);

	void remove_element(std::vector<int>& v, int ep);

	void input_element(std::vector<std::string>& v, int p, const std::string val);


	int list_nth_element(std::list<int> l, int i);

	void list_sort_desc(std::list<int>& l);

	unsigned int unique_numbers(std::istream& is);


	class word_frequency {
	private:
		std::map<std::string, unsigned int> m;
	public:
		word_frequency(std::istream& is);

		unsigned int count() const;
		unsigned int frequency(const std::string& s);
	};
}
