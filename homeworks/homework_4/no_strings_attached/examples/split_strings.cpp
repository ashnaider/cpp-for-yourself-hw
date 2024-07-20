#include <iostream>
#include <string>
#include <vector>

#include <no_strings_attached/string_split.h>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    string lhs = "aaabaaba";
    string delim = "aa";
    vector<string> res = no_strings_attached::string_split::Split(lhs, delim);

    for (string s : res)
        cout << s << "; ";
    cout << endl;

    return 0;
}
