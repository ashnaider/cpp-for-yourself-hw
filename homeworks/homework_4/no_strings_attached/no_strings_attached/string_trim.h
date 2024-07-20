#pragma once

#include <string>


namespace no_strings_attached {
namespace string_trim {

enum class Side {
    kLeft,
    kRight,
    kBoth
};

std::string Trim(const std::string& str, char char_to_trim, Side side);
std::string Trim(const std::string& str);


}
}
