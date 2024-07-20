#include <iostream>
#include <string>
#include <vector>

#include <no_strings_attached/string_trim.h>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    string lhs = "    hello    world    ";
    string res = no_strings_attached::string_trim::Trim(lhs);

    cout << res << endl;

    return 0;
}
