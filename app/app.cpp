#include "app.h"

namespace vsite::oop::v9
{

    void fill_vector(std::vector<int>& v, size_t n)
    {
        for (int i = 0; i < n; ++i)
        {
            v.push_back(i * i);
        }
    }

    void remove_element(std::vector<int>& v, size_t n)
    {
        v.erase(v.begin() + n);
    }

    void input_element(std::vector<std::string>& v, size_t n, std::string s)
    {
        v.insert(v.begin() + n, s);
    }

    int list_nth_element(std::list<int>& l, size_t n)
    {
        auto it = l.begin();

        for (int i = 0; i < n; ++i) {
            ++it;
        }

        return *it;
    }

    void list_sort_desc(std::list<int>& l)
    {
        l.sort(std::greater<int>());
    }

    unsigned int unique_numbers(std::istream& is)
    {
        std::set<int> s;
        int num;

        while (is >> num) {
            s.insert(num);
        }

        return s.size();
    }


    word_frequency::word_frequency(std::istream& is)
    {
        std::string word;

        while (is >> word) {
            for (auto& c : word) {
                c = tolower(c);
            }
            _dict[word]++;
        }
    }

    unsigned int word_frequency::count() const
    {
        return _dict.size();
    }

    unsigned int word_frequency::frequency(const std::string& word) const
    {
        auto it = _dict.find(word);
        return it != _dict.end() ? it->second : 0;
    }

}