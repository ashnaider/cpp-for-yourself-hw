#include "string_trim.h"

#include <string>

namespace no_strings_attached {
namespace string_trim {


std::string Trim(const std::string& str, char char_to_trim, Side side) {
    int i_left = 0;
    if (Side::kLeft == side || Side::kBoth == side) {
        for (size_t i = 0; i < str.size(); ++i) {
            char curr_ch = str[i];
            if (char_to_trim != curr_ch) {
                break;
            }
            i_left++;
        }
    }

    int i_right = str.size() - 1;
    if (Side::kRight == side || Side::kBoth == side) {
        for (int i = str.size() - 1; i >= 0; --i) {
            char curr_ch = str[i];
            if (char_to_trim != curr_ch) {
                break;
            }
            i_right--;
        }
    }

    std::string new_str = "";
    for (int i = i_left; i <= i_right; ++i) {
        new_str.push_back(str[i]);
    }

    return new_str;
}

std::string Trim(const std::string& str) {
    return Trim(str, ' ', Side::kBoth);
}


}
} // namespace no_strings_attached
