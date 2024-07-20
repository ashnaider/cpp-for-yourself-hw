#pragma once

#include <string>
#include <vector>

namespace no_strings_attached {
namespace string_split {

std::vector<std::string> Split(const std::string& string, const std::string& delimeter);
std::vector<std::string> Split(const std::string& str, const std::string& delimiter, int number_of_chunks_to_keep);

std::string getSubStr(const std::string& str, size_t left, size_t right);
}
}
