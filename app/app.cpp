#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int i) {
		for (auto vi = 0; vi < i; ++vi)
			v.push_back(vi * vi);
	}

	void remove_element(std::vector<int>& v, int ep) {
		std::vector<int>::const_iterator where = (v.begin() + ep);
		v.erase(where);
	}

	void input_element(std::vector<std::string>& v, int p, const std::string val) {
		std::vector<std::string>::const_iterator where = (v.begin() + p);
		v.insert(where, val);

	}
}