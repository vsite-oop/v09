#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <list>
#include <map>
#include <set>

namespace vsite::oop::v9
{
    void fill_vector(std::vector<int>& v, size_t n);
    void remove_element(std::vector<int>& v, size_t n);
    void input_element(std::vector<std::string>& v, size_t n, std::string s);
    int list_nth_element(std::list<int>& l, size_t n);
    void list_sort_desc(std::list<int>& l);
    unsigned int unique_numbers(std::istream& is);
    void toLowerCase(std::string& s);

    class word_frequency
    {
    private:
        std::map<std::string, unsigned int> _dict;

    public:
        word_frequency(std::istream& is);

        unsigned int count() const;
        unsigned int frequency(const std::string& word) const;
    };
}