#include "app.h"

#include<sstream>
#include<set>

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int size) {
		/*Test vector_fill first makes elements on indexes from
		0 to 9, then from 10 to 14. Element values (which are
		being squared) in both cases start from 0.*/
		for (int i = 0; i < size; ++i) {
			v.push_back(pow(i, 2));
		}
	}

	void remove_element(std::vector<int>& v, int index) {
		v.erase(v.begin() + index);
	}

	void input_element(std::vector<std::string>& v, int index, \
		std::string some_string) {
		v.insert(v.begin() + index, some_string);
	}

	int list_nth_element(std::list<int>& l, int index) {
		typedef std::list<int>::iterator iter;  // Named list iterator "iter".
		iter it = l.begin();  // Set my iter "it" to the start of my list.

		for (int i = 0; i < index; ++i) {
			++it;  // Walking through the list with my iter.
		}
		return *it;  // Returning int value at which my iterator points.
	}

	void list_sort_desc(std::list<int>& l) {
		/*"We can pass the “greater()” function to sort in descending order."
		www.geeksforgeeks.org/sort-c-stl/*/
		l.sort(std::greater<int>());
	}

	unsigned unique_numbers(std::istream& input)  // N.B.
	{
		std::set<int> unique_values;
		int value;
		while (input >> value)
		{
			unique_values.insert(value);
		}
		return unique_values.size();
	}


	word_frequency::word_frequency(std::istream& is) {
		// TODO
	}

	unsigned word_frequency::count() {
		// TODO
	}

	unsigned word_frequency::frequency(std::string input) {
		// TODO
	}
}