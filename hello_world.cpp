#include <iostream>

// Main function: asks for user's name and prints a greeting
int main() {
    std::string name;  // Stores the user's name
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
