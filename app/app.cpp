#include "app.h"
#include <list>
#include <algorithm>
#include <sstream>
#include <unordered_map>
namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int size) {
		for (int i = 0; i < size; i++) {
			v.push_back(i * i);
		}


	}
	void remove_element(std::vector<int>& v, int pos) {
		v.erase(v.begin() + pos);

	}

	void input_element(std::vector<std::string>& v, int  pos, const std::string el) {
		v.insert(v.begin() + pos, el);

	}

	int list_nth_element(std::list<int>& l, int pos) {

		auto it = l.begin();

		std::advance(it, pos);

		return *it;

	}


	void list_sort_desc(std::list<int>& l) {
		l.sort(std::greater<int>());
	}
	unsigned int unique_numbers(std::istream & ss) {
			std::set<int> s{};
			int a;
			while (ss >> a) {
				s.insert(a);
			}
			return s.size();
	}


		word_frequency::word_frequency(std::istream & is)
		{
			std::string word;
			while (is >> word)
			{
				word[0] = tolower(word[0]);
				insert(word);
			}
		}


		void word_frequency::insert(const std::string & s)
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
