#include "app.h"
#include <list>
#include <sstream>
#include <unordered_map>
namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int broj)
	{
		for (int i = 0; i < broj; ++i)
		{
			v.push_back(i*i);
		}
	}
	void remove_element(std::vector<int>& v, int pos)
	{
		v.erase(v.begin()+pos);
	}
	void input_element(std::vector<std::string>& v, int pos, std::string s)
	{
		v.insert(v.begin() + pos, s);
	}
	int list_nth_element(std::list<int>& v, int pos)
	{
		std::list<int>::iterator it = v.begin();
		std::advance(it, pos);
		return *it;
	}
	void list_sort_desc(std::list<int>& v)
	{
		v.sort(std::greater<int>());
	}
	unsigned unique_numbers(std::stringstream& s)
	{
		std::unordered_map<int, int> m;
		int value;
		int unique = 0;
		while (s >> value)
		{
			m[value]++;

		}
		return m.size();
	}
	
	unsigned word_frequency::count() {
		std::stringstream copy(s1.str());
		std::unordered_map<std::string, int> m;
		std::string value;
		while (copy >> value)
		{
			for (char& c : value)
			{
				c = std::tolower(c);
			}
			m[value]++;

		}
		return m.size();
	}
	unsigned word_frequency::frequency(std::string s)
	{
		std::stringstream copy(s1.str());
		std::unordered_map<std::string, int> m;
		std::string value;
		while (copy >> value)
		{
			for (char& c : value)
			{
				c = std::tolower(c);
			}
			m[value]++;
		} 
		return m[s];
	}

}
