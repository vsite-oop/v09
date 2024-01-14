#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& vec, int size)
	{
		for (int i = 0; i < size; ++i)
		{
			vec.push_back(i * i);
		}
	}

	void remove_element(std::vector<int>& vec, int index)
	{
		vec.erase(vec.begin() + index);
	}

	void input_element(std::vector<std::string>& vec, int index, std::string s)
	{
		vec.insert(vec.begin() + index, s);
	}



	int list_nth_element(std::list<int>& lis, int index)
	{
		auto it = lis.begin();
		for (int i = 0; i < index; ++i)
		{
			++it;
		}
		return *it;
	}




	void list_sort_desc(std::list<int>& lis)
	{
		lis.sort(std::greater<int>());
	}


	unsigned unique_numbers(std::istream& is)
	{
		std::set<int> s{};
		int broj;
		while (is >> broj)
		{
			s.insert(broj);
		}
		return s.size();
	}

	word_frequency::word_frequency(std::istream& is)
	{
		std::string word;
		while (is >> word)
		{
			word[0] = tolower(word[0]);
			insert(word);  
		}
	}


	void word_frequency::insert(const std::string& s)
	{
		++m[s];
	}


	unsigned word_frequency::count() const
	{
		return m.size();
	}

	unsigned word_frequency::frequency(std::string s) const
	{
		auto it = m.find(s);
		return it != m.end() ? it->second : 0;
	}
}