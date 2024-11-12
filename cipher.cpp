#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::cout << "Input your full name: ";
    std::string input;
    std::getline(std::cin, input);  // Use getline to capture the full line, including spaces

    std::cout << "Input shift number: ";
    int shift = 0;
    std::cin >> shift;

    for (char& c : input) {
        // Convert to lowercase for consistency
        c = std::tolower(c);

        // Only apply shift if it's a lowercase letter
        if (std::isalpha(c)) {
            // Shift within the alphabet range
            c = ((c - 'a' + shift) % 26 + 'a');
        }
    }

    std::cout << "Shifted result: " << input << std::endl;
    return 0;
}