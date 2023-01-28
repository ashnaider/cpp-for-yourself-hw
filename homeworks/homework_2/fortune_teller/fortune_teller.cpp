#include <iostream>
#include <string>
#include <vector>
#include <map>
using std::cin, std::cout, std::endl;
using std::string;
using std::map, std::vector, std::array;


int main() {
    const map<string, string> season2noun {
        {"spring", "STL guru"},
        {"summer", "C++ expert"},
        {"autumn", "coding beast"},
        {"winter", "software design hero"}
    };

    array endings {
        "eats UB for breakfast",
        "finds errors quicker than the compiler",
        "is not afraid of C++ error messages",
    };

    vector<string> adjectives(2);

    cout << "Welcome to the fortune teller program!" << endl;
    cout << "Please enter your name:" << endl;
    string user_name{}; cin >> user_name;
    
    cout << "Please enter the time of year when you were born:\n" 
         << "(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
    string user_born{}; cin >> user_born;

    cout << "Please enter an adjective:" << endl;    
    cin >> adjectives.at(0);
    cout << "Please enter another adjective:" << endl;
    cin >> adjectives.at(1);

    string adjective = adjectives.at(user_name.size() % adjectives.size());
    string noun = season2noun.at(user_born);
    string ending = endings.at(user_name.size() % endings.size());
    
    cout << "\nHere is your description:" << endl;
    cout << user_name + ", the " + adjective + " " + noun + " that " + ending << endl;

    return 0;       
}