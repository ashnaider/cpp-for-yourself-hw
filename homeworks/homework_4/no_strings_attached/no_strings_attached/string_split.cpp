#include "string_split.h"

#include <iostream>

namespace no_strings_attached {
namespace string_split {

std::vector<std::string> Split(const std::string& str, const std::string& delimeter) {
    std::vector<std::string> res;
    std::string curr_word;

    std::vector<int> findings;
    size_t pos = 0;
    while (true) {
        pos = str.find(delimeter, pos);
        if (pos == std::string::npos) {
            break;
        }
        findings.push_back(pos);
        pos += delimeter.size();
    }

    int i = 0;
    std::string sub_str;
    for (int finding : findings) {
        sub_str = getSubStr(str, i, finding);
        res.push_back(sub_str);
        i = finding + delimeter.size();
    }
    sub_str = getSubStr(str, i, str.size());
    res.push_back(sub_str);
    return res;
}

std::vector<std::string> Split(const std::string& str, const std::string& delimiter, int number_of_chunks_to_keep) {
    std::vector<std::string> res = Split(str, delimiter);
    std::vector<std::string> crop_res;
    auto start = res.begin();
    auto end = res.begin() + number_of_chunks_to_keep;
    crop_res.reserve(end - start);
    std::copy(start, end, std::back_inserter(crop_res));
    return crop_res;
}

std::string getSubStr(const std::string& str, size_t left, size_t right) {
    std::string sub_str;
    if (left < str.size() && right <= str.size()) {
        for (size_t i = left; i < right; ++i) {
            sub_str.push_back(str[i]);
        }
    }
    return sub_str;
}

} // namespace string_split
}
