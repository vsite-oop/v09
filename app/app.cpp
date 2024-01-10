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
	unsigned unique_numbers(std::istream& s)
	{
		std::unordered_set<int> brojevi;
		int value;
		while (s >> value)
		{
			brojevi.insert(value);

		}
		return brojevi.size();
	}
	word_frequency::word_frequency(std::istream& s)
	{
		std::string value;
		while (s >> value)
		{
			for (char& c : value)
			{
				c = std::tolower(c);
			}
			words[value]++;
		}
	}
	unsigned word_frequency::count() {
		return words.size();
	}
	unsigned word_frequency::frequency(const std::string& s)
	{
		auto it = words.find(s);
		return (it != words.end()) ? it->second : 0;
	}

}
