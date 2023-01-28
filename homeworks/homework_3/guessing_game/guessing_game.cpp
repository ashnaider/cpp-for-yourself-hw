#include <iostream>
#include <random>
using std::cin, std::cout, std::endl;


int main() {
    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    cout << "Welcome to the GUESSING GAME!\n"
         << "I will generate a number and you will guess it!" 
         << endl;

    cout << "Please provide the smallest number: " << endl;
    int left_border, right_border;
    cin >> left_border;
    cout << "Please provide the largest number: " << endl;
    cin >> right_border;

    std::uniform_int_distribution distribution{left_border, right_border};
    const int rand_num = distribution(random_engine);

    cout << "I've generated a number. Try to guess it!" << endl;

    int guess{};
    int guess_count{0};
    while (true) {
        ++guess_count;
        cout << "Please provide the next guess:" << endl;
        cin >> guess;
        if (guess < rand_num) {
            cout << "Your number is too small. Try again!" << endl;
        } else if (guess > rand_num) {
            cout << "Your number is too big. Try again!" << endl;
        } else break; 
    }

    cout << "You've done it! You guessed the number " << rand_num << " in " << guess_count << " guesses!" << endl;
}