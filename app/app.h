#pragma once

#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <set>
#include <map>


namespace vsite::oop::v9 
{
   void fill_vector(std::vector<int>& v,int size);
   void remove_element(std::vector<int>& v,int i);
   void input_element(std::vector<std::string>& v,int i,std::string s);
   int list_nth_element(std::list<int>& l, int n);
	void list_sort_desc(std::list<int>& l);
	unsigned unique_numbers(std::istream& ss);

	class word_frequency {

		std::map<std::string, unsigned> m;
		void insert(const std::string& s);

	  public:

		word_frequency(std::istream& ss);
		unsigned count()const;
		unsigned frequency(std::string s)const;

	};
}

