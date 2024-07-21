#include <iostream>
#include <string>
#include <vector>

#include <no_strings_attached/string_split.h>

using std::cout, std::cin, std::endl;
using std::string, std::vector;

int main() {
    cout << "Example program that splits strings." << endl;
    cout << "Please enter a string:";

    string str_to_split;
    std::getline(std::cin, str_to_split);

    string delim = " ";
    vector<string> res = no_strings_attached::Split(str_to_split, delim);

    cout << "Your split string: ";

    for (size_t i = 0; i < res.size(); ++i) {
        cout << "'" << res[i] << "'";
        if (i < res.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
