#pragma once
#include <vector>
#include <list>
#include <iostream>
#include <map>

namespace vsite::oop::v9 
{
    void fill_vector(std::vector<int>& v, const int& val);
    void remove_element(std::vector<int>& v, const int& pos);
    void input_element(std::vector<std::string>& v, const int& pos, const std::string& c);
    int list_nth_element(std::list<int>& inList, const int& pos);
    void list_sort_desc(std::list<int>& inList);
    uint32_t unique_numbers(std::istream& ss);

    class word_frequency
    {
        std::map<std::string, int> mWordFrequency;
    public:
        word_frequency(std::istream& ss);
        uint32_t count() const;
        uint32_t frequency(const std::string& word) const;
    };
}
