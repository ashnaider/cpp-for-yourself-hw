#include <iostream>
#include <string>
#include <vector>

#include <no_strings_attached/string_trim.h>

using std::cout, std::cin, std::endl;
using std::string, std::vector;

int main() {
    cout << "Example program that trims strings." << endl;
    cout << "Please enter a string:" << endl;

    string str_to_trim;
    std::getline(std::cin, str_to_trim);

    string delim = " ";
    string res = no_strings_attached::Trim(str_to_trim);

    cout << "Your trimmed string: " << "'" << res << "'" << endl;

    return 0;
}
