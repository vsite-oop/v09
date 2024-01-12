#include "app.h"

namespace vsite::oop::v9
{
    void fill_vector(std::vector<int>& v, size_t n)
    {
        size_t size = v.size() + n; 

        while (v.size() < size)
        {
            int num = v.size() % 10;

            v.push_back(num * num);
        }
    }

    void remove_element(std::vector<int>& v, size_t n)
    {
        for (size_t i = n; i < v.size() - 1; ++i)
        {
            v[i] = v[i + 1];
        }
        v.pop_back();
    }

    void input_element(std::vector<std::string>& v, size_t n, std::string s)
    {
        if (v.capacity() < v.size() + 1) {
            v.push_back("");
        }

        for (size_t i = n; i < v.size() - 1; ++i)
        {
            v[i+1] = v[i];
        }

        v[n] = s;
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
        for (auto it = l.begin(); it != l.end(); it++) {
            for (auto it2 = it; it2 != l.end(); it2++) {
                if (*it < *it2) {
                    std::swap(*it, *it2);
                }
            }
        }
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


    std::map<std::string, unsigned int> word_frequency::fill_dict(std::istream& is)
    {
        std::map<std::string, unsigned int> dict;
        std::string word;

        while (is >> word) {
            for (auto& c : word) {
                c = tolower(c);
            }
            dict[word]++;
        }
        return dict;
    }

    unsigned int word_frequency::count() const
    {
        return _dict.size();
    }

    unsigned int word_frequency::frequency(const std::string& word) const
    {
        try
        {
            return _dict.at(word);
        }
        catch (const std::exception&)
        {
            return 0;
        }
    }
}