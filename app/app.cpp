#include "app.h"
#include <vector>
#include <list>
#include <iostream>
#include <set>

namespace vsite::oop::v9
{
    void fill_vector(std::vector<int>& v, const int& val) {
        for (int i = 0; i < val; ++i) v.push_back(i * i);
    };

    void remove_element(std::vector<int>& v, const int& pos) {
        v.erase(v.begin() + pos);
    };

    void input_element(std::vector<std::string>& v, const int& pos, const std::string& c) {
        v.insert(v.begin() + pos, c);
    };

    int list_nth_element(std::list<int>& inList, const int& pos) {
        int i = 0;
        for (auto& it : inList) {
            if (i++ == pos) return it;
        }
        return INT32_MIN;
    };

    void list_sort_desc(std::list<int>& inList) {
        inList.sort(std::greater<>());
    };

    uint32_t unique_numbers(std::istream& ss) {
        std::string val;
        std::set<std::string> values{};
        while (ss >> val) {
            values.insert(val);
        };

        return values.size();
    };

    word_frequency::word_frequency(std::istream& ss) {
        std::string word{};
        while (ss >> word) {
            for (auto& it : word) {
                it = std::tolower(it);
            }

            if (std::string("!.?,:").find(word.back()) != -1)
                word.pop_back();
            if (mWordFrequency.count(word) == 0)
                mWordFrequency[word] = 1;
            else {
                ++mWordFrequency[word];
            }
        }
    }

    uint32_t word_frequency::count() const {
        return mWordFrequency.size();
    }

    uint32_t word_frequency::frequency(const std::string& word) const {
        auto it = mWordFrequency.find(word);
        if (it != mWordFrequency.end())
            return mWordFrequency.at(word);

        return 0U;
    }
}
