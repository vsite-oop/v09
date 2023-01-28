#include "app.h"

namespace vsite::oop::v9
{
    void fill_vector(std::vector<int>& v,int size){
        for (int i = 0; i < size; ++i) {
			v.push_back(i * i);
		}
    }

    void remove_element(std::vector<int>& v,int i){
        v.erase(v.begin() + i);
    }

    void input_element(std::vector<std::string>& v,int i,std::string s){
           v.insert(v.begin() + i, s);

    }

    int list_nth_element(std::list<int>& l, int n){
            auto it = l.begin();
		    for (int i = 0; i < n; ++i)++it;
		    return *it;
    }
    
    void list_sort_desc(std::list<int>& l){

        l.sort(std::greater<int>());
    }

    unsigned unique_numbers(std::istream& ss){

        std::set<int> x{};
		int a;
		while (ss) {
			ss >> a;
			x.insert(a);
		}
		return x.size();
    }
    word_frequency::word_frequency(std::istream& ss) {
		std::string str;
		while (ss) {
			ss >> str;
			str[0] = tolower(str[0]);
			insert(str);
		}
	}

	void word_frequency::insert(const std::string& ss) {
		++m[ss];
	}

	unsigned word_frequency::count()const {
		return m.size();
	}

	unsigned word_frequency::frequency(std::string s)const {
		auto it = m.find(s);
		return it != m.end() ? it->second : 0;
	}



}
